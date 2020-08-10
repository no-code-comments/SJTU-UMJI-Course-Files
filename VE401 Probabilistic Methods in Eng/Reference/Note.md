# Contents

[TOC]

# Probability

## Binomial Coeffient

$\left( \begin{matrix} n \\ x \end{matrix} \right) = \dfrac{n!}{x!(n-x)!}$

## Total Probability

$P[B] = \sum\limits_{k=1}^{n} P[B|A_k] \cdot P[A_k]$

## Bayes Theorem

$P[A|B] = \dfrac{P[B|A] \cdot P[A]}{P[B]}$

## Random Variables

Discrete: (1) $f_X(x) \ge 0 \ (x \in \mathbb{R})$ and (2) $\sum\limits_{x \in \Omega} f_X(x) = 1$

Continuous: (1) $f_X(x) \ge 0 \ (x \in \mathbb{R})$ and (2) $\displaystyle\int_{-\infty}^{\infty} f_X(x) = 1$

## Cumulative distribution

Discrete: $F_X: \mathbb{R} \rightarrow \mathbb{R} \qquad F_X(x): P[X \le x] \qquad F_X(x) = \sum\limits_{y \le x} f_X(y)$

Continuous: $F_X: \mathbb{R} \rightarrow \mathbb{R} \qquad F_X(x): P[X \le x] \qquad F_X(x) = \displaystyle\int_{-\infty}^{t} f_X(t) dt \qquad f_X(x) = F^\prime_X (x)$

## Expectation

Discrete: $E[X] = \sum\limits_{x \in \Omega} x \cdot f_X(x) \qquad E[\varphi(X)] = \sum\limits_{x \in \Omega} \varphi (x) \cdot f_X(x)$

Continuous: $E[X] = \displaystyle\int_{-\infty}^{\infty} x \cdot f_X(x) dx \qquad E[\varphi (X)] = \displaystyle\int_{-\infty}^{\infty} \varphi (x) \cdot f_X(x) dx$

$E\left[ \sum\limits_{i=1}^{n} X_i \right] = \sum\limits_{i=1}^{n}E[X_i]$

Multivariate random variables: $E[AX] = AE[X]$

## Variance and Standard Deviation

$\mathrm{Var}[X] = E[(X - E[X])^2] = E[X^2] - E[X]^2$

$\mathrm{Var}[aX+b] = a^2 \mathrm{Var}[X]$

$\sigma_X = \sqrt{\mathrm{Var}[X]}$

Multivariate random variables: 

$\mathrm{Var}[AX] = A(\mathrm{Var}[X])A^{-T}$

$\mathrm{Var}[X+Y] = \mathrm{Var}[X] + \mathrm{Var}[Y] + 2\mathrm{Cov}[X,Y]$

$\mathrm{Var}[X-Y] = \mathrm{Var}[X] + \mathrm{Var}[Y] - 2\mathrm{Cov}[X,Y]$

## Covariance

$\mathrm{Cov}[X, Y] = E[XY] - E[X]E[Y] $

$X$ and $Y$ are independent $\rightarrow$ $\mathrm{Cov}[X, Y] = 0$

## Pearson Coefficient

$\rho_{XY} = \dfrac{\mathrm{Cov}[X, Y]}{\sqrt{\mathrm{Var}[X] \mathrm{Var}[Y]}}$

$\mathrm{Var}[\widetilde X+\widetilde Y] = 2 + 2\rho_{XY}$

$\mathrm{Var}[\widetilde X-\widetilde Y] = 2 - 2\rho_{XY}$

Fisher Transformation: $\rho_{XY} = \tanh \left( \ln \left( \dfrac{\sigma_{\widetilde X + \widetilde Y}}{\sigma_{\widetilde X - \widetilde Y}} \right) \right)$

$\rho_{XY} > 0$: positively correleted

$\rho_{XY} < 0$: negatively correleted

## Standardized Random Variables

$Y = \dfrac{X - \mu}{\sigma} \qquad E[Y] = 0 \qquad \mathrm{Var}[Y] = E[Y^2] = 1$

## n^th^ moment

n^th^ ordinary moment: $E[X^n]$

n^th^ central moment: $E\left[\left( \dfrac{X-\mu}{\sigma} \right)^n\right]$

## Moment Generating Function

$m_X(t) = \sum\limits_{k=0}^{\infty}\dfrac{E[X^k]}{k!}t^k = E[e^{tX}]$

$E[X^k] = \left. \dfrac{d^km_X(t)}{dt^k} \right\vert_{t=0}$

## Continuous Location

median $M_X$ when $P[X \le M_X] = P[X \ge M_X] = \dfrac{1}{2}$

mean $E[X]$

mode $x_0$ when $f_X{x_0}$ reaches the maximum value

## Marginal Density

$f_{X_1}(x_1) = \displaystyle\int f_{X} (x_1, x_2)dx_2$

$f_{X_1}(x_1) = \displaystyle\int f_{X} (x_1, x_2, \cdots,x_n)dx_2dx_3\cdots dx_n$

## Independence

$f_X(x_1,x_2) = f_{X_1}(x_1) \cdot f_{X_2}(x_2)$

$f_X(x_1,x_2,\cdots,x_n) = f_{X_1}(x_1) \cdot f_{X_2}(x_2) \cdots f_{X_n}(x_n)$

## Conditional Density

$f_{X_1 | x_2} (x_1) = \dfrac{f_X(x_1, x_2)}{f_{X_2} (x_2)}$

## Reliability

Failure density: $f_A(t) = \lim\limits_{\Delta t\rightarrow \infty} \dfrac{P[t \le T \le t + \Delta t]}{\Delta t} = \lim\limits_{\Delta t\rightarrow \infty} \dfrac{F(t+\Delta t) - F(t)}{\Delta t}$

Reliability: $R_A(t) = 1 - \displaystyle\int_{0}^{t} f_A(x) dx = 1 - F_A(t)$

Hazard rate: $\rho_A(t) = \dfrac{f_A(t)}{R_A(t)}$

Differential equation: $R_A(t) = e^{-\int_0^t \rho_A(x) dx} \qquad R_A(0) = 1$

Series: $R_s(t) = \prod\limits_{i=1}^{k} R_i(t)$

Parallel: $R_p(t) = 1 - \prod\limits_{i=1}^{k} (1-R_i(t))$

## Weibull Density

$\rho(t) = \alpha \beta t^{\beta - 1}$

$R(t) = e^{-\alpha t^{\beta}}$

$f(t) = \alpha \beta t^{\beta - 1}e^{-\alpha t^{\beta}}$

$E[X] = \alpha^{-\frac{1}{\beta}}\Gamma\left( 1+\dfrac{1}{\beta} \right)$

$\mathrm{Var}[X] = \alpha^{-\frac{2}{\beta}}\Gamma\left( 1+\dfrac{2}{\beta} \right) - \alpha^{-\frac{2}{\beta}}\Gamma^2\left( 1+\dfrac{1}{\beta} \right)$

## Hypergeometric Identity

$\displaystyle \sum\limits_{r=0}^{a+b} \left( \begin{matrix} a+b \\ r \end{matrix} \right) = \sum\limits_{r=0}^{\infty}\sum\limits_{i+j=r} \left( \begin{matrix} a \\ i \end{matrix} \right) \left( \begin{matrix} b \\ j \end{matrix} \right)$





# Statistics

## Quartiles

$\mathrm{IQR} = q_3 - q_1$

## Bins

Sturges: $k = \lceil \log_2(n) \rceil + 1 \qquad h = \dfrac{\max - \min}{k}$

Freedman: $h = \dfrac{2\cdot \mathrm{IQR}}{\sqrt[3]{n}}$

## Parameter Estimation

$\mathrm{bias} = \hat \theta - E[\hat{\theta}]$

$\mathrm{MSE}[\hat\theta] = E[(\hat\theta - \theta)^2] = \mathrm{Var}[\hat\theta] + (\mathrm{bias})^2$

$E[\overline X] = \mu$

$\mathrm{Var}[\overline X] = \dfrac{\sigma^2}{n}$

$S^2 = \dfrac{1}{n-1}\sum\limits_{k=1}^{n}(X_k - \overline X)^2 $

## Interval Estimation

$\dfrac{\alpha}{2} = P[Z \ge z_{\alpha / 2}] = \dfrac{1}{\sqrt{2\pi}}\displaystyle\int_{z_{\alpha / 2}}^{\infty}e^{-\frac{t^2}{2}}dt$

$100(1-\alpha)\%$ confidence interval on $\mu$: $\left[ \overline X - \dfrac{z_{\alpha / 2}\cdot \sigma}{\sqrt{n}}, \overline X + \dfrac{z_{\alpha / 2}\cdot \sigma}{\sqrt{n}}\right]$

$100(1-\alpha)\%$ confidence interval on $\mu$ without variance: $\left[ \overline X - \dfrac{t_{\alpha / 2, n-1}\cdot S}{\sqrt{n}}, \overline X + \dfrac{t_{\alpha / 2, n-1}\cdot S}{\sqrt{n}} \right]$

$100(1-\alpha)\%$ upper confidence bound on $\mu$: $\overline X + \dfrac{z_{\alpha}\cdot \sigma}{\sqrt{n}}$

$100(1-\alpha)\%$ lower confidence bound on $\mu$: $\overline X - \dfrac{z_{\alpha}\cdot \sigma}{\sqrt{n}}$

$100(1-\alpha)\%$ confidence interval on $\sigma^2$: $\left[ \dfrac{(n-1)S^2}{\chi^2_{\alpha / 2, n-1}} , \dfrac{(n-1)S^2}{\chi^2_{1 - \alpha / 2, n-1}} \right]$

$100(1-\alpha)\%$ upper confidence bound on $\sigma^2$: $\dfrac{(n-1)S^2}{\chi^2_{1 - \alpha, n-1}}$

$100(1-\alpha)\%$ lower confidence bound on $\sigma^2$: $\dfrac{(n-1)S^2}{\chi^2_{\alpha, n-1}}$





# Collections of Distribution

## Bernoulli Distribution

Example: Tossing one coin

$X: S \rightarrow \{ 0, 1 \} \subset \mathbb{R}$

$f_X : \{0,1\} \rightarrow \mathbb{R}$

$f_X(x) = \left\{ \begin{array}{ll} 1-p & x=0 \\ p & x = 1 \end{array} \right.$

## Binomial Distribution

Example: Tossing $n$ coins, having $x$ heads

$X: S \rightarrow \Omega = \{ 0,\cdots , n \} \subset \mathbb{R}$

$f_X : \Omega \rightarrow \mathbb{R}$

$f_X(x) = \left( \begin{matrix} n \\ x \end{matrix} \right) p^x (1-p)^{n-x}$

$X \sim \mathrm{B}(n, p)$

$E[X] = np$

$\mathrm{Var}[X]=npq$

$m_X(t) = (q + pe^t)^n$

## Geometric Distribution

Example: Tossing coins, having the first head at the $x$ toss

$X: S \rightarrow \Omega = \mathbb{N} \backslash \{ 0 \} \subset \mathbb{R}$

$f_X : \Omega \rightarrow \mathbb{R}$

$f_X(x) = (1-p)^{x-1}p$

$X \sim \mathrm{Geom}(n, p)$

$F_X(x) = P[X \le x] = 1 - q^{ \lfloor x \rfloor}$

$E[X] = \dfrac{1}{p}$ 

$\mathrm{Var}[X] = \dfrac{q}{p^2}$

$m_X(t) = \dfrac{pe^t}{1-qe^t}$

## Pascal Distribution

Example: Tossing coins, haveing the $r$ success at the $x$ toss

$X: S \rightarrow \Omega = \{ r, r+1, r+2, \cdots \}$

$f_X : \Omega \rightarrow \mathbb{R}$

$f_X(x) = \left( \begin{matrix} x-1 \\ r-1 \end{matrix} \right) p^r (1-p)^{x-r}$

$E[X] = \dfrac{r}{p}$ 

$\mathrm{Var}[X] = \dfrac{qr}{p^2}$

$m_X(t) = \dfrac{(pe^t)^r}{(1-qe^t)^r}$

## Negative Binomial Distribution

Example: Tossing coins, having $x$ tails before occuring $r$ success

$X: S \rightarrow \Omega = \mathbb{N}$

$f_X : \Omega \rightarrow \mathbb{R}$

$f_X(x) = \left( \begin{matrix} x+r-1 \\ r-1 \end{matrix} \right) p^r (1-p)^{x} = (-1)^x \left( \begin{matrix} -r \\ x \end{matrix} \right) p^r (1-p)^{x}$

## Poisson Distribution

Example: For average $k$ deaths per day, having $x$ death on one day.

$X: S \rightarrow \Omega = \mathbb{N}$

$f_X : \Omega \rightarrow \mathbb{R}$

$f_X(x) = \dfrac{k^xe^{-k}}{x!}$

$F_X{x} = P[X \le x] = \sum\limits_{y=0}^{\lfloor x \rfloor} \dfrac{e^{-k}k^y}{y!}$

$E[X] = k$

$\mathrm{Var}[X] = k$

$m_X(t) = e^{k(e^t - 1)}$

## Exponential Distribution

Example: For average $k$ deaths per day, having another death after one death

$\beta = \dfrac{1}{\lambda} = \dfrac{t}{k}$

$f_{\beta}(x) = \left\{ \begin{array}{ll} \dfrac{1}{\beta} e^{-\frac{1}{\beta} x} & x \gt 0 \\ & \\0 & x \le 0 \end{array} \right. $

$E[X] = \beta$

$\mathrm{Var}[X] = \beta ^2$

$m_X(t) = \dfrac{1}{1-\beta t} $

$P[X > x + s | X > x] = P[X > s]$

## Gamma Distribution

Example: For average $k$ deaths per day, having $r$ more deaths after one death

$\alpha = r \qquad \beta = \dfrac{1}{\lambda} = \dfrac{t}{k}$

$f_{\alpha,\beta}(x) = \left\{ \begin{array}{ll} \dfrac{x^{\alpha-1}}{\beta^{\alpha}\Gamma(\alpha)}e^{-\frac{x}{\beta}} & x > 0 \\ 0 & x \le 0 \\ \end{array} \right.$ where $\Gamma(\alpha) = \displaystyle{\int_{0}^{\infty}} z^{\alpha - 1}e^{-z} dz $

$m_X(t) = \left( 1 - \beta t \right)^{-\alpha}$

$E[X] = \alpha \beta$

$\mathrm{Var}[X] = \alpha \beta^2$

## Chi-squared Distribution

$f_{\gamma}(x) = \left\{ \begin{array}{ll} \dfrac{1}{\Gamma(\frac{\gamma}{2})2^{\frac{\gamma}{2}}}x^{\frac{\gamma}{2}-1}e^{-\frac{x}{2}} & x > 0 \\ 0 & x \le 0 \\ \end{array} \right. \qquad \alpha = \dfrac{\gamma}{2}, \beta = 2$ in Gamma distribution

$m_X(t) = \left( 1 - 2 t \right)^{-\frac{\gamma}{2}}$

$E[X] = \gamma$

$\mathrm{Var}[X] = 2\gamma$

## Normal(Gaussian) Distribution

$f_X(x) = \dfrac{1}{\sqrt{ 2\pi \sigma^2}} e^{-\frac{1}{2}\left( \frac{x-\mu}{\sigma} \right)^2}$

$m_X(t) = e^{\mu t + \frac{\sigma^2 t^2}{2}}$

$E[X] = \mu$

$\mathrm{Var}[X] = \sigma^2$

## Standard Normal Distribution

$f_Z(z) = \dfrac{1}{\sqrt{2\pi}} e^{-\frac{z^2}{2}} \qquad Z = \dfrac{X - \mu}{\sigma}$ when $X$ follows normal distribution

$E[X] = 0$

$\mathrm{Var} [X] = 1$

$P[Z \le z] = F_Z(z) = \Phi(z) = \dfrac{1}{\sqrt{2\pi}} \displaystyle\int_{-\infty}^{z} e^{-\frac{t^2}{2}} dt$

$\mathrm{erf}(z) = \dfrac{1}{\sqrt{\pi}} \displaystyle\int_{0}^{z} e^{-t^2} dt \qquad \mathrm{erfc} (z) = 1 - \mathrm{erf}(z) = 1 - \dfrac{1}{\sqrt{\pi}} \displaystyle\int_{0}^{z} e^{-t^2} dt$

$\Phi (z) = \dfrac{1}{2} \mathrm{erfc}\left( -\dfrac{x}{\sqrt{2}} \right)$

## Bivariate Normal Distribution

$f_{XY}(x, y) = \dfrac{1}{2\pi\sigma_X\sigma_Y\sqrt{1-\rho^2}} e^{-\frac{1}{2(1-\rho^2)} \left[ \left( \frac{x-\mu_X}{\sigma_X} \right)^2 - 2 \left( \frac{x-\mu_X}{\sigma_X} \right) \left( \frac{y-\mu_Y}{\sigma_Y} \right) + \left( \frac{y-\mu_Y}{\sigma_Y} \right)^2 \right]}$

$f_X(x) = \dfrac{1}{\sqrt{ 2\pi \sigma_X^2}} e^{-\frac{1}{2}\left( \frac{x-\mu_X}{\sigma_X} \right)^2} \qquad f_Y(y) = \dfrac{1}{\sqrt{ 2\pi \sigma_Y^2}} e^{-\frac{1}{2}\left( \frac{y-\mu_Y}{\sigma_Y} \right)^2}$

$\rho_{XY} = \rho$

$X$ and $Y$ are independent if and only if $\rho = 0$

## Hypergeometric Distribution

Example: Drawing $n$ balls from an urn containing $r$ red balls and $N-r$ black balls, having $x$ red balls.

$f_X(x) = \dfrac{\left( \begin{matrix} r \\ x \end{matrix} \right) \left( \begin{matrix} N-r \\ n - x  \end{matrix} \right) }{ \left( \begin{matrix} N \\ n  \end{matrix} \right)}$

$E[X] = \dfrac{nr}{N}$

$\mathrm{Var}[X] = \dfrac{nr(N-r)(N-n)}{N^2(N-1)}$





# Approximation

## Hypergeometric $\rightarrow$ Binomial

If $\frac{n}{N}$ is small, hypergeometric distribution can be approximated to binomial distribution

$p = \dfrac{r}{N} \qquad q = \dfrac{N-r}{N}$

$f_X(x) = \dfrac{\left( \begin{matrix} r \\ x \end{matrix} \right) \left( \begin{matrix} N-r \\ n - x  \end{matrix} \right) }{ \left( \begin{matrix} N \\ n  \end{matrix} \right)} \rightarrow \left( \begin{matrix} n \\ x \end{matrix} \right) p^x (1-p)^{n-x}$

## Binomial $\rightarrow$ Poisson

If $n$ is large, binomial distribution can be approximated to poisson distribution

$k = np$

$f_X(x): \left( \begin{matrix} n \\ x \end{matrix} \right) p^x (1-p)^{n-x} \rightarrow \dfrac{k^x e^{-k}}{x!}$

## Binomial $\rightarrow$ Normal

If $np$ is large, binomial distribution can be approximated to normal distribution

$\mu = np \qquad \sigma^2 = npq$

$f_X(x): \left( \begin{matrix} n \\ x \end{matrix} \right) p^x (1-p)^{n-x} \rightarrow \dfrac{1}{\sqrt{2\pi\sigma^2}} e^{-\frac{1}{2} \left( \frac{x-\mu}{\sigma} \right)^2}$

$P[X \le x] \approx \Phi \left( \dfrac{x + \frac{1}{2} - \mu}{\sigma} \right)$

$P[X < x] \approx \Phi \left( \dfrac{x - \frac{1}{2} - \mu}{\sigma} \right)$

$P[X \ge x] \approx 1 - \Phi \left( \dfrac{x - \frac{1}{2} - \mu}{\sigma} \right)$

$P[X > x] \approx 1 - \Phi \left( \dfrac{x + \frac{1}{2} - \mu}{\sigma} \right)$





# Transformation

## Simple Case

If $Y = \varphi(X)$ and $\varphi: \mathbb{R} \rightarrow \mathbb{R}$ and $\varphi$ is monotonic and differentiable, then

$f_Y(y) = \left\{ \begin{array}{ll} f_X({\varphi^{-1} (y)) \cdot \left\vert \dfrac{d\varphi^{-1} (y)}{dy} \right\vert } & y \in \mathrm{ran}\varphi \\ & \\ 0 & y \notin \mathrm{ran}\varphi \end{array} \right.$

Proof for $y \in \mathrm{ran} \varphi$ and $\varphi$ is decreasing:

$\begin{align*} F_Y(y)&  = P[Y \le y] \\ & = P[\varphi (X) \le y] \\ & = P[\varphi^{-1} (\varphi (X)) \ge \varphi^{-1} (y)] \\ & = P[X \ge \varphi^{-1} (y)] \\ & = 1 - P[X \le \varphi^{-1} (x)] \\ & = 1 - F_X(\varphi^{-1} (x)) \end{align*}$

$f_Y(y) = F^\prime_Y (y) = -f_X (\varphi^{-1} (x)) \underbrace{\dfrac{d\varphi^{-1} (y)}{dy}}_{<0} = f_X (\varphi^{-1} (x)) \left\vert \dfrac{d\varphi^{-1} (y)}{dy} \right\vert $

## Multivariate Random Variables

If $Y = \varphi(X)$ and $\varphi: \mathbb{R}^n \rightarrow \mathbb{R}^n$ and $\varphi$ is bijective and differentiable, then

$f_Y(y) = f_X(\varphi^{-1}(y)) \cdot |\mathrm{det} D\varphi^{-1}(y) |$

## Square Transformation

If $Y = X^2$, then

$f_Y(y) = P[Y \le y] = P[X^2 \le y] = P[-\sqrt{y} \le X \le \sqrt{y}] = \displaystyle\int_{-\sqrt{y}}^{\sqrt{y}} f_X(x)$





# Hypothesis Testing

## Neyman-Pearson Test

Type I Error: $\alpha = P[H_1|H_0]$

Type II Error: $\beta = P[H_0|H_1]$

Power: $\mathrm{Power} = 1 - \beta = P[H_1|H_1]$

$n \approx \dfrac{(z_\alpha + z_\beta)^2\sigma^2}{\delta^2} \qquad n \approx \dfrac{(z_{\alpha / 2} + z_\beta)^2\sigma^2}{\delta^2}$

## Z-Test

$Z = \dfrac{\overline X - \mu}{\sigma} \sqrt{n}$ follows the standard normal distribution

$H_0: \mu \le \mu_0 \qquad z \in [z_\alpha , +\infty) \qquad \mathrm{P} = P[\overline X \ge \overline x | \mu = \mu_0, \sigma = \sigma_0] = P\left[\dfrac{\overline X - \mu_0}{\sigma_0}\sqrt{n} \ge \dfrac{\overline x - \mu_0}{\sigma_0}\sqrt{n}\right] = P[Z \ge z]$

$H_0: \mu \ge \mu_0 \qquad z \in (-\infty, -z_\alpha] \qquad \mathrm{P} = P[\overline X \le \overline x | \mu = \mu_0, \sigma = \sigma_0] = P\left[\dfrac{\overline X - \mu_0}{\sigma_0}\sqrt{n} \le \dfrac{\overline x - \mu_0}{\sigma_0}\sqrt{n}\right] = P[Z \le z]$

$H_0 : \mu = \mu_0 \qquad z \in (-\infty, -z_{\alpha / 2}] \cup [z_{\alpha / 2}, +\infty)$

$H_0: \mu = \mu_0, \overline x > \mu_0 \qquad \mathrm{P} = 2P[\overline X \ge \overline x | \mu = \mu_0, \sigma = \sigma_0] = 2(1 - \Phi(z))$

$H_0: \mu = \mu_0, \overline x < \mu_0 \qquad \mathrm{P} = 2P[\overline X \le \overline x | \mu = \mu_0, \sigma = \sigma_0] = 2\Phi(z)$

## T-Test

$T = \dfrac{\overline X - \mu}{s}\sqrt{n}$ follows the $T_{n-1}$distribution

$H_0 : \mu \le \mu_0 \qquad t \in [t_{\alpha, n-1}, +\infty)$

$H_0 : \mu \ge \mu_0 \qquad t \in (-\infty, -t_{\alpha, n-1}]$

$H_0 : \mu = \mu_0 \qquad t \in (-\infty, -t_{\alpha / 2, n-1}] \cup [t_{\alpha / 2, n-1}, +\infty)$

$d = \dfrac{|\mu - \mu_0|}{\sigma}$

## Chi-squared Test

$\chi^2 = \dfrac{(n-1)s^2}{\sigma_0^2}$ follows the chi-squared distribution

$H_0: \sigma \le \sigma_0 \qquad \chi^2 = [\chi^2_{\alpha, n-1}, +\infty)$

$H_0 : \sigma \ge \sigma_0 \qquad \chi^2 = (-\infty, \chi^2_{1-\alpha, n-1}]$

$H_0 : \sigma = \sigma_0 \qquad \chi^2 = (-\infty, \chi^2_{1-\alpha, n-1}] \cup [\chi^2_{\alpha, n-1}, +\infty)$

$\lambda = \dfrac{\sigma}{\sigma_0}$

## Sign Test for the Median

$Q_- = \#\{X_i - M_0 > 0\} \qquad Q_+ = \# \{X_i - M_0 < 0\}$

$P[Q < k|M=M_0] = \sum\limits_{x=0}^{k} \left( \begin{matrix} n \\ x \end{matrix} \right) \dfrac{1}{2^n}$

$H_0: M \le M_0 \qquad P[Q_- < k | M = M_0] \in [0, \alpha]$

$H_0: M \ge M_0 \qquad P[Q_+ < k | M = M_0] \in [0, \alpha]$

$H_0: M = M_0 \qquad P[\min \{Q_-, Q_+\} < k | M = M_0] \in [0, \dfrac{\alpha}{2}]$

## Wilcoxon Signed Rank Test

$W_- = \sum\limits_{R_i < 0} |R_i| \qquad W_+ = \sum\limits_{R_i > 0} R_i$

$H_0: M \le M_0 \qquad W_- \in [0, W_\alpha]$

$H_0: M \ge M_0 \qquad W_+ \in [0, W_\alpha]$

$H_0: M = M_0 \qquad \min \{W_-, W_+\} \in [0, W_{\alpha / 2}]$

Normal Distribution Approximation: $E[X] = \dfrac{n(n+1)}{4} \qquad \mathrm{Var}[X] = \dfrac{n(n+1)(2n+1)}{24}$

## Test for Proportion

$Z = \dfrac{\widehat p - p_0}{\sqrt{\dfrac{p_0 (1-p_0)}{n}}}$ is called a large-sample test for proportion

$H_0 : p \le p_0 \qquad Z \in [z_\alpha, +\infty)$

$H_0 : p \ge p_0 \qquad Z < (-\infty, -z_\alpha]$

$H_0 : p = p_0 \qquad Z \in [-z_{\alpha / 2}, z_{\alpha / 2}]$

## Comparing Two Proportions

$Z = \dfrac{\widehat{p_1} - \widehat{p_2} - p_0}{\sqrt{\dfrac{\widehat{p_1} (1 - \widehat{p_1})}{n_1} + \dfrac{\widehat{p_2} (1 - \widehat{p_2})}{n_2}}}$ is called a large-sample test for differences in proportions

$H_0 : p_1 - p_2 \le p_0 \qquad Z \in [z_\alpha, +\infty)$

$H_0 : p_1 - p_2 \ge p_0 \qquad Z < (-\infty, -z_\alpha]$

$H_0 : p_1 - p_2 = p_0 \qquad Z \in [-z_{\alpha / 2}, z_{\alpha / 2}]$

## Pooled Test

$Z = \dfrac{\widehat{p_1} - \widehat{p_2}}{\sqrt{\dfrac{n_1 + n_2}{n_1n_2}\widehat{p}(1-\widehat{p})}} \left( \widehat{p} = \dfrac{n_1\widehat{p_1} + n_2\widehat{p_2}}{n_1 + n_2} \right)$ is called a pooled large-sample test for equality of proportions

$H_0 : p_1 - p_2 \le 0 \qquad Z \in [z_\alpha, +\infty)$

$H_0 : p_1 - p_2 \ge 0 \qquad Z < (-\infty, -z_\alpha]$

$H_0 : p_1 - p_2 = 0 \qquad Z \in [-z_{\alpha / 2}, z_{\alpha / 2}]$

## F-Distribution

$F = \dfrac{\gamma_2}{\gamma_1} \cdot \dfrac{\chi^2_{\gamma_1}}{\chi^2_{\gamma_2}}$ follows an F-distribution

$f_{\gamma_1, \gamma_2}(x) = \gamma_1^{\frac{\gamma_1}{2}} \gamma_2^{\frac{\gamma_2}{2}}\dfrac{\Gamma(\frac{\gamma_1 + \gamma_2}{2})}{\Gamma(\frac{\gamma_1}{2})\Gamma(\frac{\gamma_2}{2})}\dfrac{x^{\frac{\gamma_1}{2}-1}}{(\gamma_1 x + \gamma_2)^{\frac{\gamma_1 + \gamma_2}{2}}}$

## F-Test

$F_{n_1-1, n_2-2} = \dfrac{S_1^2}{S_2^2}$

$H_0 : \sigma_1 - \sigma_2 \le 0 \qquad F_{n_1-1, n_2-2} \in [f_{\alpha, n_1-1, n_2-1}, +\infty )$

$H_0 : \sigma_1 - \sigma_2 \ge 0 \qquad F_{n_1-1, n_2-2} \in \left(0, \dfrac{1}{f_{\alpha, n_2-1, n_1-1}} \right]$

$H_0 : \sigma_1 - \sigma_2 = 0 \qquad F_{n_1-1, n_2-2} \in \left(0, \dfrac{1}{f_{\alpha, n_2-1, n_1-1}} \right] \cup [f_{\alpha, n_1-1, n_2-1}, +\infty )$

$\lambda = \dfrac{\sigma_1}{\sigma_2}$

## Comparing Means — Known Variance

$Z = \dfrac{\overline{X_1} - \overline{X_2}}{\sqrt{\dfrac{\sigma_1^2}{n_1} + \dfrac{\sigma_2^2}{n_2}}}$ follows a standard normal distribution

$H_0 : \mu_1 \le \mu_2 \qquad z \in [z_{\alpha}, +\infty)$

$H_0 : \mu_1 \ge \mu_2 \qquad z \in z (-\infty, -z_{\alpha}]$

$H_0 : \mu_1 = \mu_2 \qquad z \in (-\infty, -z_{\alpha}] \cup [z_{\alpha}, +\infty)$

$d = \dfrac{| \mu_1 - \mu_2|}{\sqrt{\sigma_1^2 + \sigma_2^2}}$

$N = \dfrac{\sigma_1^2 + \sigma_2^2}{\dfrac{\sigma_1^2}{n_1} + \dfrac{\sigma_2^2}{n_2}}$

## Comparing Means — Unknown Equivalent Variance

$T_{n_1 + n_2 - 2} = \dfrac{\overline{X_1} - \overline{X_2} - \mu_0}{\sqrt{s_p^2 \left( \dfrac{1}{n_1} + \dfrac{1}{n_2}\right)}}$ is called a Student’s (pooled) test for equality of means

$s_p = \dfrac{(n_1 - 1)s_1^2 + (n_2 - 1)s_2^2}{n_1 + n_2 - 2}$

$H_0 : \mu_1 - \mu_2 \le \mu_0 \qquad t \in [t_{\alpha, n_1 + n_2 - 2} , +\infty )$

$H_0 : \mu_1 - \mu_2 \le \mu_0 \qquad t \in (-\infty, -t_{\alpha, n_1 + n_2 - 2}]$

$H_0 : \mu_1 - \mu_2 \le \mu_0 \qquad t \in (-\infty, -t_{\alpha / 2, n_1 + n_2 - 2}] \cup [t_{\alpha / 2, n_1 + n_2 - 2} , +\infty )$

$d = \dfrac{|\mu_1 - \mu_2 |}{2\sigma}$

$N = 2n - 1$

## Comparing Means — Unknown Variance

$T_\gamma = \dfrac{\overline{X_1} - \overline{X_2} - \mu_0}{\sqrt{\dfrac{s_1^2}{n_1} + \dfrac{s_2^2}{n_2}}}$ is called a Welch’s (pooled) test for equality of means

$\gamma = \left\lfloor \dfrac{\left( \dfrac{s_1^2}{n_1} + \dfrac{s_2^2}{n_2} \right)^2}{\dfrac{\left( \frac{s_1^2}{n_1} \right)^2}{n_1 - 1} + \dfrac{\left( \frac{s_2^2}{n_2} \right)^2}{n_2 - 1}} \right\rfloor$

$H_0 : \mu_1 - \mu_2 \le \mu_0 \qquad t \in [t_{\alpha, \gamma} , +\infty )$

$H_0 : \mu_1 - \mu_2 \le \mu_0 \qquad t \in (-\infty, -t_{\gamma}]$

$H_0 : \mu_1 - \mu_2 \le \mu_0 \qquad t \in (-\infty, -t_{\alpha / 2, \gamma}] \cup [t_{\alpha / 2, \gamma} , +\infty )$

## Wilcoxon Rank-Sum Test

$W_m = \sum\limits_{i = 1}^{m} R_{X_i}$

$H_0: M \le M_0 \qquad W_- \in [0, W_\alpha]$

$H_0: M \ge M_0 \qquad W_+ \in [0, W_\alpha]$

$H_0: M = M_0 \qquad \min \{W_-, W_+\} \in [0, W_{\alpha / 2}]$

Normal Distribution Approximation: $E[X] = \dfrac{m(m+n+1)}{2} \qquad \mathrm{Var}[X] = \dfrac{mn(m+n+1)}{12 - \sum \frac{t^3 + t}{12}} \approx \dfrac{mn(m+n+1)}{12}$

## Distribution Estimation

Cochran’s Rule: $E[X_i ]  ≥ 1$ for all $i = 1,\cdots,k$ and $E[X_i ] ≥ 5$ for 80% of all $i = 1,\cdots,n$

$\chi^2 = \displaystyle\sum\limits_{i=1}^{n} \dfrac{(X_i - O_i)^2}{X_i}$ follows a chi-squared distribution with $n-1-m$ degrees of freedom

$H_0: \mathrm{Good\ Model} \qquad \chi^2 \in [\chi^2_{\alpha, n-1-m}, +\infty)$ 

## Independency

$E_{ij} = \dfrac{n_i n_j}{n}$

$\chi^2 = \displaystyle\sum_{i=1}{r}\displaystyle\sum_{j=1}{c} \dfrac{(E_{ij} - O_{ij})^2}{E_{ij}}$ follows a chi-squared distribution with $(r-1)(c-1)$ degrees of freedom

$H_0: \mathrm{Independent} \qquad \chi^2 \in [\chi^2_{\alpha, (r-1)(c-1)}, +\infty)$ 



# Simple Linear Regression

## Basic Statistic

$\mu_{Y|x} = \beta_0 + \beta_1 x$

$y_i = b_0 + b_1 x_i + e_i$

$S_{xx} = \sum\limits_{i=1}^{n} (x_i - \overline x)^2$

$S_{yy} = \sum\limits_{i=1}^{n}(y_i - \overline y)^2 $

$S_{xy} = \sum\limits_{i=1}^{n} (x_i - \overline x)(y_i - \overline y)$

$b_1 = \dfrac{S_{xy}}{S_{xx}}$

$b_0 = \overline y - b_1 \overline x$

$\mathrm{SSE} = \sum\limits_{i=1}^{n} (y_i - b_0 - b_1 x_i)^2 = S_{yy} - b_1 S_{xy}$

$\mathrm{SST} = \sum\limits_{i=1}^{n} (y_i - \overline y )^2 = S_{yy}$

$R^2 = \dfrac{\mathrm{SST} - \mathrm{SSE}}{\mathrm{SST}} = \dfrac{S_{xy}^2}{S_{xx}S_{yy}}$

$\mathrm{SSE_{pe}} = \sum\limits_{i=1}^{k} \sum\limits_{j=1}^{n_i} (y_{ij} - \overline{y_i})^2$

$\mathrm{SSE_{lf}} = \mathrm{SSE} - \mathrm{SSE_{pe}}$

$s^2 = \dfrac{\mathrm{SSE}}{n-2}$

## Slope $b_1$

$\dfrac{B_1 - \beta_1}{s}\sqrt{S_{xx}}$ follows a T-distribution with $n-2$ degrees of freedom

$100(1-\alpha)\%$ confidence interval: $\left[b_1 - t_{\alpha / 2, n - 2}\dfrac{s}{\sqrt{S_{xx}}}, b_1 + t_{\alpha / 2, n - 2}\dfrac{s}{\sqrt{S_{xx}}}\right]$

## Intercept $b_0$

$\dfrac{B_0 - \beta_0}{s\sqrt{\sum\limits_{i=1}^{n}x_i^2}}\sqrt{nS_{xx}}$ follows a T-distribution with $n-2$ degrees of freedom

$100(1-\alpha)\%$ confidence interval: $\left[b_0 - t_{\alpha / 2, n - 2}\dfrac{s\sqrt{\sum x_i^2}}{\sqrt{nS_{xx}}}, b_0 + t_{\alpha / 2, n - 2}\dfrac{s\sqrt{\sum x_i^2}}{\sqrt{nS_{xx}}}\right]$

## Mean $\mu_{Y|x}$

$\dfrac{\widehat{\mu}_{Y|x} - \mu_{Y|x}}{s\sqrt{\dfrac{1}{n} + \dfrac{(x - \overline x)^2}{S_{xx}}}}$ follows a T-distribution with $n-2$ degrees of freedom

$100(1-\alpha)\%$ confidence interval: $\left[\mu_{Y|x} - t_{\alpha / 2, n - 2}s\sqrt{\dfrac{1}{n} + \dfrac{(x - \overline x)^2}{S_{xx}}}, \mu_{Y|x} + t_{\alpha / 2, n - 2}s\sqrt{\dfrac{1}{n} + \dfrac{(x - \overline x)^2}{S_{xx}}} \right]$

## Prediction $Y|x$

$\dfrac{\widehat{Y|x} - Y|x}{s\sqrt{1 + \dfrac{1}{n} + \dfrac{(x - \overline x)^2}{S_{xx}}}}$ follows a T-distribution with $n-2$ degrees of freedom

$100(1-\alpha)\%$ prediction interval: $\left[Y|x - t_{\alpha / 2, n - 2}s\sqrt{1 + \dfrac{1}{n} + \dfrac{(x - \overline x)^2}{S_{xx}}}, Y|x + t_{\alpha / 2, n - 2}s\sqrt{1 + \dfrac{1}{n} + \dfrac{(x - \overline x)^2}{S_{xx}}} \right]$

## Test for Significance of Regression

$t = \dfrac{b_1}{s}\sqrt{S_{xx}}$

$H_0: \beta_1 = 0 \qquad t \in (-\infty, -t_{\alpha / 2, n - 2}] \cup [t_{\alpha / 2, n - 2} , +\infty)$

## Test for Correlation

$t = \dfrac{R\sqrt{n-2}}{1 - R^2}$

$H_0 : \rho = 0 \qquad t \in (-\infty, -t_{\alpha / 2, n - 2}] \cup [t_{\alpha / 2, n - 2} , +\infty)$

## Test for Lack of Fit

$F = \dfrac{n-k}{k-2} \cdot \dfrac{\mathrm{SSE_{lf}}}{\mathrm{SSE_{pe}}}$

$H_0: \mathrm{Appropriate\ Model} \qquad F \in [f_{\alpha, k-2, n-k}, +\infty)$



# Multiple Linear Regression

## Basic Statistic

$Y = X\beta + E$

$Y = Xb + e$

$b = (X^TX)^{-1}X^T Y$

$\mathrm{SSE} = \left\langle Y - Xb, Y-Xb \right\rangle = (Y - Xb)^T (Y - Xb) = \left\langle Y, (I-H)Y \right\rangle$

$\mathrm{SST} = \sum\limits_{i=1}^{n} (y_i - \overline y )^2 = \left\langle Y , (I - P) Y \right\rangle$

$\mathrm{SSR} = \mathrm{SST} - \mathrm{SSE} = \left\langle Y, (H - P) Y \right\rangle = \left\langle (H - P) Y, (H - P) Y \right\rangle$

$R^2 = \dfrac{\mathrm{SSR}}{\mathrm{SST}}$ 

$s^2 = \dfrac{\mathrm{SSE}}{n - p - 1}$

## Confidence Intervals for the Model Parameters

$\dfrac{\widehat{\beta_j} - \beta_j}{s\sqrt{(X^TX)_{jj}}}$ follows a T-distribution with $n - p - 1$ degrees of freedom

$100(1-\alpha)\%$ confidence interval: $\left[b_j - t_{\alpha / 2, n - p - 1 } s \sqrt{(X^TX)_{jj}}, b_j + t_{\alpha / 2, n - p - 1 } s \sqrt{(X^TX)_{jj}} \right]$

## Prediction $Y|x$

$\dfrac{\widehat{Y|x} - Y|x}{s\sqrt{1 + x^T(X^TX)^{-1}x}}$ follows a T-distribution with $n - p -1$ degrees of freedom

$100(1-\alpha)\%$ prediction interval: $\left[ Y|x - t_{\alpha / 2, n - p - 1}s\sqrt{1 + x^T(X^TX)^{-1}x} , Y|x + t_{\alpha / 2, n - p - 1}s\sqrt{1 + x^T(X^TX)^{-1}x} \right]$

## Test for Significance of Regression

$F = \dfrac{n-p-1}{p}\cdot \dfrac{\mathrm{SSR}}{\mathrm{SSE}} = \dfrac{\mathrm{SSR}}{ps^2} = \dfrac{n - p - 1}{p} \dfrac{R^2}{1 - R^2}$

$H_0: \beta_1 = \cdots = \beta_p = 0 \qquad F \in [f_{\alpha, p, n-p-1}, +\infty)$

## T-Test for Model Sufficiency

$t = \dfrac{b_j}{s\sqrt{(X^TX)_{jj}}}$

$H_0 : \beta_j = 0 \qquad t \in (-\infty, -t_{\alpha, n-p-1}] \cup [t_{\alpha, n-p-1}, +\infty)$

## Partial F-Test for Model Sufficiency

$F = \dfrac{n-p-1}{p-m}\cdot \dfrac{\mathrm{SSE_{reduced}} - \mathrm{SSE_{full}}}{\mathrm{SSE_{full}}}$

$H_0 : \mathrm{Sufficient\ Model} \qquad F \in [f_{\alpha, p-m, n-p-1}, +\infty)$