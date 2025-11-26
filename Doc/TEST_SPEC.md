# Experiment specification

## Purpose of this Document
This document describes the purpose, setup and hypotheses of this experiment.

## The purpose of this Experiment
This experiment aims to to evaluate how different AI Platforms/Models perform when given a randomly selected Jeopardy clue
without any additional context. The set of Jeopardy clues used in this experiment is:
the jeopardy_clue_dataset repository, which prefers not to be directly credited.

The experiment involves the following AI platforms:
- ChatGPT (OpenAI)
- Gemini (Google)
- Copilot (Microsoft)
- Claude (Anthropic)
- Grok (xAI)
- Mistral (LeChat AI)
- Perplexity
- Lumo (Proton)

# Additional tools used
This experiment uses the following additional tools:
- custom RNG-based random selector to select season and clue value
- Markdown documentation
- A python script to extract 200 most common Jeopardy categories from the dataset.
- [Wheel Decide](https://wheeldecide.com/) to select clue category from a set of 200 core Jeopardy categories.

# Ground rules
Each AI platform is expected to implicitly infer and follow the Jeopardy answer format.

# Evaluation criteria
Te evaluation criteria for each AI platform are as follows:
- Can AI implicitly recognize a Jeopardy clue based on the format and wording alone?
- Can AI correctly infer the expected answer to the Jeopardy clue?
- Can AI implicitly infer and understand the correct answer format required as per the Jeopardy rules?
- How consistently can AI perform across a set of 10 randomly selected Jeopardy clues?
