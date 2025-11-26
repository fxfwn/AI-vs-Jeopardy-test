# AI vs Jeopardy! Test

An experiment that evaluates the ability of AI models to implicitly recognize Jeopardy! clues and infer the correct answer format without additional context.

## Overview

This project tests how well various AI platforms can:
- Recognize Jeopardy! clue format based on wording alone
- Infer the correct answer to randomly selected clues
- Follow Jeopardy! answer format conventions without being explicitly told

## AI Platforms Tested

- ChatGPT (OpenAI)
- Gemini (Google)
- Copilot (Microsoft)
- Claude (Anthropic)
- Grok (xAI)
- Mistral (LeChat AI)
- Perplexity
- Lumo (Proton)

## Repository Structure

- **`Doc/`** - Experiment documentation
    - `TEST_SPEC.md` - Detailed experiment specification and methodology
    - `EXPERIMENT_ANALYSIS.md` - Results and analysis
- **`TOOLS/`** - Helper utilities for experiment execution
    - `category-set.py` - Extracts top 200 most common Jeopardy! categories
    - `szn_cat-chooser.c` - RNG-based selector for season and clue value

## Methodology

1. **Random Selection**: Use `szn_cat-chooser` to randomly select a season (1-41) and clue value ($100-$500)
2. **Category Selection**: Use `category-set.py` to identify common categories, then randomly select one
3. **Clue Selection**: Query the dataset for a clue matching the selected parameters
4. **Testing**: Present the clue to each AI platform without additional context
5. **Evaluation**: Assess implicit recognition, answer accuracy, and format compliance