import pandas as pd
import itertools

data = {
    "artist": ["A", "B", "A", "C", "B", "A", "C", "B","A","C","B"],
    "venue": ["X", "Y", "X", "Z", "Y", "X", "Z", "Y","Z","Y","Z"],
    "date": [
        "2025-01-15", "2025-10-15", "2025-02-20", "2025-02-20",
        "2025-03-10", "2025-10-10", "2025-04-15", "2025-04-15", "2025-11-15", "2025-01-20", "2025-03-20"
    ]
}

concerts = pd.DataFrame(data)

concerts["year_month"] = pd.to_datetime(concerts["date"]).dt.to_period("M")

concert_counts = concerts.groupby(["year_month", "artist", "venue"]).size().reset_index(name="count")

artists = concerts["artist"].unique()
venues = concerts["venue"].unique()

artist_venue_pairs = pd.DataFrame(list(itertools.product(artists, venues)), columns=["artist", "venue"])

# Create table
result = (
    concert_counts
    .merge(artist_venue_pairs, on=["artist", "venue"], how="right")
    .pivot(index="year_month", columns=["artist", "venue"], values="count")
    .fillna(0)  
    .astype(int)  
)

print(result)