import csv
from collections import Counter

dataset = "combined_season1-41.tsv"
category_counts = Counter()

with open(dataset, encoding="utf-8") as f:
    reader = csv.DictReader(f, delimiter="\t")
    for row in reader:
        category = row['category'].strip()
        category_counts[category] += 1

top_200 = category_counts.most_common(200)

with open("category-set.txt", "w", encoding="utf-8") as f:
    for cat, count in top_200:
        f.write(f"{cat}\n")

print("Top 200 categories saved to category-set.txt")