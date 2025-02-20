import re

def tokenize(text):
   
    patterns = {
        'punctuation': r'[।,;:!?(){}[\]\'\"।]',
        'date': r'\d{1,2}/\d{1,2}/\d{2,4}',
        'url': r'https?://[^\s]+',
        'email': r'[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}',
        'number': r'\d{1,3}(,\d{3})*(\.\d+)?',
        'username': r'@[a-zA-Z0-9_]+',
        'hindi_word': r'[\u0900-\u097F]+'
    }

   
    combined_pattern = '|'.join(f'(?P<{key}>{pattern})' for key, pattern in patterns.items())

   
    tokens = []
    for match in re.finditer(combined_pattern, text):
        token_type = match.lastgroup
        token_value = match.group(token_type)
        tokens.append((token_type, token_value))

    return tokens


text = "नमस्ते! मेरा नाम @ump है। मेरी ईमेल ump@gmail.com है। आज की तारीख 20/02/2025 है। मेरी वेबसाइट https://example.com है। मैंने 3,22,243 रुपये खर्च किए।"

tokens = tokenize(text)
for token_type, token_value in tokens:
    print(f'{token_type}: {token_value}')