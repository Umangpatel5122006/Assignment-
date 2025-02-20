def decode_ways(s):
    if not s:
        return [""]
    
    d = {"1": "A", "2": "B", "3": "C", "4": "D", "5": "E", "6": "F", "7": "G", "8": "H", "9": "I", "10": "J",
         "11": "K", "12": "L", "13": "M", "14": "N", "15": "O", "16": "P", "17": "Q", "18": "R", "19": "S", "20": "T",
         "21": "U", "22": "V", "23": "W", "24": "X", "25": "Y", "26": "Z"}
    
    def decode_helper(s, index):
        if index == len(s):
            return [""]
        
        results = []
        
        # Single digit msg
        if s[index] in d:
            for suffix in decode_helper(s, index + 1):
                results.append(d[s[index]] + suffix)
        
        # Two digit msg
        if index + 1 < len(s) and s[index:index + 2] in d:
            for suffix in decode_helper(s, index + 2):
                results.append(d[s[index:index + 2]] + suffix)
        
        return results
    
    return decode_helper(s, 0)


encoded_message = input("Enter the encoded message: ")


decoded_messages = decode_ways(encoded_message)

print("Possible decoded messages:")
for message in decoded_messages:
    print(message)
        
        
        
        