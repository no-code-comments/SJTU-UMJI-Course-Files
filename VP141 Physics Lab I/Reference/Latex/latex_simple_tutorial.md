# $\LaTeX$ Tutorial

[TOC]

## Introduction

This file only supply a simple tutorial for $\LaTeX$, for detailed information, please see file **lshort-zh-cn.pdf** in this folder.

A template is supplied in this folder, you can use this template to write the report for VP141 and VP241.

Please read the Warning part carefully.

## Body

This section will give you some basic commands. You can handle almost all the reports using these techniques.

### Import packages

Some functions are not implemented in $\LaTeX$, but you can import some packages to extends its functions. the code is

```latex
\usepackage{name}[option]
```

In general, the packages imported in the template is enough, you do not need to care about these things.

### Write document

Without special cases, you do not need to know the option about a document. The only thing you need to know is you should write everything in the document tag.

```latex
\documentclass[a4paper,12pt]{article}
... %import packages and other settings
\begin{document}
... %things you want to display
\end{document}
```

When writing paragraphs, you should end your paragraph like this to turn to the next paragraph.

```latex
...paragraph... 

...paragraph...
% --- or ---
...paragraph... \\
...paragraph...
% --- or ---
% this will have a larger margin between the two paragraphs
...paragraph... \\

...paragraph...
```

### Sections

$\LaTeX$ supply codes for segmentation.

```latex
\section{name}
\subsection{name}
\subsubsection{name}
\paragraph{name}
\subparagraph{name}
```

### Insert table

```latex
\begin{table}[H]
\centering
\caption{title}
\begin{tabular}{fomat} % c means center, l means left, r means right, | means lines
% Use \hline to seperate lines
% Use & to turn to the next cell
% Use \\ to turn to the next line
\end{tabular}
\end{table}
```

Because it is very complex, a sample table is given.

```latex	
\begin{table}[H]
\centering
\caption{Evaluation of professors}
\begin{tabular}{|c|c||c|c|}
\hline
\textbf{Professor} & \textbf{Score} & \textbf{Professor} & \textbf{Score} \\
\hline
C.SL & 0.1 & O.D & 9.5 \\
\hline
C.M & 0.0 & Q.WK & 10.0 \\
\hline
S.HB & 2.0 & R.T & 10.0 \\
\hline
\end{tabular}
\end{table}
```

### Insert figure

```latex
\begin{figure}[H]
\centering{\includegraphics[format]{path}}
\caption{title}
\end{figure}
```

A sample figure is given

```latex
\begin{figure}[H]
\centering{\includegraphics[width=12cm]{images/ji_logo.png}}
\caption{Shanghai Jiao Tong University - University of Michigan Joint Institute}
\end{figure}
```

### Mathjax

#### math environment

MathJax should be written in Math environment. There are four common ways to create Math environment.

```latex
% single $ enclosed
$codes$
% double $ enclosed
$$codes$$
% equation and equation* tag enclosed
\begin{equation}
codes
\end{equation}
\begin{equation*}
codes
\end{equation*}
% align and align* tag enclosed
\begin{align}
codes
\end{align}
\begin{align*}
codes
\end{align*}
```

- Single $ is used in math symbols in a sentence.
- Double $ and `equation` tag is used in displaying a single.
- `align` tag is used to show a math formula or calculation in multiple lines.
- `*` means that the formula does not need its serial number.

#### math formulas

You can write math formulas in the math environment. Some common commands will be displayed as followed.

- `\dfrac{nominator}{dominator}` and `\frac{nominator}{dominator}`: $\text{\dfrac{2}{5}} \Leftrightarrow \dfrac{2}{5}, \text{\frac{2}{5}} \Leftrightarrow \frac{2}{5}$
- `\text{…}`: $\text{text\text{text}} \Leftrightarrow text\text{text}$
- `\quad` and `\qquad`: $\text{Hello\quad World} \Leftrightarrow Hello\quad World$
- `_` and `^`: $\text{a_{i}} \Leftrightarrow a_{i}, \text{b^{2}} \Leftrightarrow b^{2}, \text{C_{2}^{3}} \Leftrightarrow C_{2}^{3}, \text{x_{x_{x_{x}^{x}}}^{x^{x_{x}^{x}}}} \Leftrightarrow x_{x_{x_{x}^{x}}}^{x^{x_{x}^{x}}}$
- `\sum`: $\text{\sum\limits_{i=0}^{n}a_i} \Leftrightarrow \sum\limits_{i=0}^{n}a_i$
- `\bar`: $\text{\bar{v}} \Leftrightarrow \bar{v}$
- **math symbols**: reference http://mohu.org/info/symbols/symbols.htm
- $\text{\mathcal{E}} \Leftrightarrow \mathcal{E}$

### Label

You can use label to cite the math formula, figure or table use `\label{text}` and `\ref{text}`. A sample label is given.

```latex
\begin{equation}
\label{e1}
1 + 1 = 3
\end{equation}

...

As is shown in Eq. (\ref{e1}), we can deduce a lot of marvelous conclusion.
```

### List

#### ordered list

```latex
\begin{enumerate}
\item ...
\item ...
\end{enumerate}
```

#### unordered list

```latex
\begin{itemize}
\item ...
\item ...
\end{itemize}
```

### Other commands

```latex
\clearpage % turn to next page
\textbf{...} % bold font
\textit{...} % italic font
\hrulefill % add a horizontal line to seperate
```

## Warning

There are three must when using this template

- Copy the images folder also, because the logo figure is in it. When inserting figures into latex, put all source figures into the images folder is recommended.
- Use **XeLaTeX** to compile the tex file.
- Compiling the tex file twice to see the Content section.