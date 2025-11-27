# Experiment Specification

## 1. Purpose of this Document
This document defines the purpose, setup, methodology, and hypotheses behind the experiment.

## 2. Purpose of the Experiment
The purpose of this experiment is to evaluate how different AI platforms and models perform when presented with a randomly selected *Jeopardy!* clue **without any additional context**.

The clues are sourced from the **jeopardy_clue_dataset** repository, which prefers not to be directly credited.

The AI platforms evaluated in this experiment include:

- **ChatGPT** (OpenAI)  
- **Gemini** (Google)  
- **Copilot** (Microsoft)  
- **Claude** (Anthropic)  
- **Grok** (xAI)  
- **Mistral / LeChat AI**  
- **Perplexity**  
- **Lumo** (Proton)

## 3. Additional Tools Used
This experiment uses the following supporting tools:

- A custom RNG-based selector to choose the season and clue value  
- Markdown-based documentation  
- A Python script to extract the **200 most common *Jeopardy!* categories** from the dataset  
- **Wheel Decide** for randomly selecting one category from the 200 core categories  

## 4. Ground Rules
Each AI platform must:

- Infer that the prompt is a *Jeopardy!* clue  
- Provide an answer following *Jeopardy!*’s expected response format  
- Operate without being explicitly told that the prompt is from *Jeopardy!*  

## 5. Evaluation Criteria
AI responses are evaluated based on:

1. **Recognition** – Does the AI implicitly recognize the prompt as a *Jeopardy!* clue?  
2. **Correctness** – Can the AI infer the correct response to the clue?  
3. **Format Compliance** – Does the AI follow the required *Jeopardy!* answer format?  
4. **Consistency** – How consistently does the AI perform across **10 randomly selected clues**?

## 6. Notes
- This experiment is conducted **independently**, without input or collaboration from any of the platforms evaluated.  
- No organization influenced the design or execution of the experiment.

## 7. Experiment-Specific Scoring
Each answer is scored based on the criteria above.

- **Maximum score:** 3 points  
- **0 points** for factually incorrect responses or violations of the required answer format  
- **Half points** may be awarded for technically correct answers that diverge from expected wording  
- All criteria are weighted equally — **no weighting or scaling** is applied  
