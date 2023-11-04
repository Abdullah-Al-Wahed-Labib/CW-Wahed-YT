"""A python script to generate some random names using the CLI"""

import sys, random

# We need to get some random first names to use as the first name
# Let's use the ChatGPT to get the dummy names.
first_names = [
    "Emma", "Liam", "Olivia", "Noah", "Ava", "Isabella", "Sophia", "Mia", "Charlotte", "Amelia",
    "Harper", "Evelyn", "Abigail", "Emily", "Elizabeth", "Sofia", "Ella", "Madison", "Scarlett", "Grace",
    "Victoria", "Chloe", "Lily", "Hannah", "Avery", "Zoe", "Nora", "Eleanor", "Layla", "Riley",
    "Penelope", "Lucy", "Aria", "Aubrey", "Violet", "Claire", "Bella", "Stella", "Lillian", "Savannah",
    "Zoe", "Natalie", "Luna", "Hazel", "Brooklyn", "Leah", "Zara", "Alice", "Ariana", "Kaylee",
    "Lila", "Melanie", "Ruby", "Kylie", "Faith", "Mila", "Aurora", "Nevaeh", "Peyton", "Sadie",
    "Paisley", "Valentina", "Nova", "Willow", "Emery", "Lydia", "Clara", "Eliana", "Gianna", "Lily",
    "Piper", "Harmony", "Olive", "Annabelle", "Eliza", "Ariella", "Isabelle", "Ella", "Sarah", "Quinn",
    "Rylee", "Skylar", "Brielle", "Fiona", "Cora", "Adalyn", "Julia", "Athena", "Elena", "Catalina",
    "Sophie", "Rosalie", "Valerie", "Daniela", "Liliana", "Elise", "Genevieve", "Zara", "Naomi", "Daisy",
    "Isabel", "Ivy", "Mackenzie", "June", "Holly", "Jasmine", "Angelina", "Esmeralda", "Nina", "Madeline"
]

# Now we need some last names to use as a last name for the user.
# After we have managed to get the first and last names randomly, we can then just concatenate the names together to get
# a new random name
# Let's use the ChatGPT again !

last_names = [
    "Smith", "Johnson", "Brown", "Davis", "Miller", "Wilson", "Moore", "Taylor", "Anderson", "Thomas",
    "Jackson", "White", "Harris", "Martin", "Thompson", "Garcia", "Martinez", "Robinson", "Clark", "Rodriguez",
    "Lewis", "Lee", "Walker", "Hall", "Allen", "Young", "King", "Wright", "Scott", "Hill",
    "Adams", "Green", "Evans", "Baker", "Nelson", "Hall", "Ward", "Rivera", "Campbell", "Mitchell",
    "Perez", "Roberts", "Turner", "Phillips", "Campbell", "Parker", "Edwards", "Collins", "Stewart", "Sanchez",
    "Morris", "Rogers", "Reed", "Cook", "Morgan", "Bell", "Murphy", "Bailey", "Cooper", "Richardson",
    "Cox", "Gray", "Bennett", "Wood", "Ward", "Coleman", "Jenkins", "Russell", "Long", "Barnes",
    "Diaz", "Hayes", "Myers", "Ford", "Hamilton", "Graham", "Sullivan", "Wallace", "Woods", "Cole",
    "West", "Jordan", "Owens", "Reyes", "Foster", "Gonzalez", "Mendoza", "Snyder", "Porter", "Hudson",
    "Barnett", "Richards", "Stone", "Sanchez", "Powell", "Webb", "Sims", "Pierce", "Nichols", "Grant",
    "Knight", "Ferguson", "Rose", "Stone", "Hawkins", "Dunn", "Perkins", "Hudson", "Spencer", "Gardner"
]

# Let's start a infinite while loop, which will collect user activities
while True:
    # Let's prompt the user for a name or quit the application
    user_input = input("\n\nDo you want to create a random name ?? (\"N\" for exit)")

    # let's check the input
    if user_input.lower() == "n":
        break
    else:
        # As the user wants to get a random name we just give it to him, using the random module
        # We forgot to add a space between first and last name :)
        name = random.choice(first_names) + " " + random.choice(last_names)
        print(f"\n\nHere is your random name : {name} \n\n")
