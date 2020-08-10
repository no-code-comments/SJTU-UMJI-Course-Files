# Uncertainty tutorial

This file will only tell you how to calculate the uncertainty.

The precision of the uncertainty is generally 1 significant figure, but if the highest non-zero digit is 1, it should be two significant digits. For example: `0.12`, `0.4`, `0.6`, `0.10`.

For every values you calculate in the result part, it should has its uncertainty. Additionally, the precision of the value should be the same as the precision of the uncertainty.

## Single measurement

In this case, the uncertainty is just the type-B uncertainty given by the instructor or the table. You do not need to perform any calculation.

## Multiple measurement

In this case, you get $n$ values for $x$ and its type-B uncertainty $\Delta_{x, \text{B}}$ initially. 

- First step: Calculate the average value. $\bar{x} = \dfrac{1}{n}\sum\limits_{i=1}^{n} x_i$
- Second step: Calculate the sample standard deviation. $s = \dfrac{1}{n-1}\sqrt{\sum\limits_{i=1}^{n} (\bar{x} - x_i)^2}$
- Third step: Calculate the type-A uncertainty. $\Delta_{x,\text{A}} = t_{0.95,n} \cdot s$
- Fourth step: Calculate the final uncertainty. $u = \sqrt{\Delta_{x,\text{A}}^2 + \Delta_{x,\text{B}}^2}$

The value of $t_{0.95,n}$ can be found at the end of this file.

## Indirect measurement

In this case, it means that you need to calculate from other values. The general formula of the uncertainty of $x = f(a,b,\cdots)$ is

$$u_x = \sqrt{\left(\dfrac{\partial x}{\partial a}u_a\right)^2 + \left(\dfrac{\partial x}{\partial b}u_b\right)^2 + \cdots}$$

For example, $x = x_1 + x_2$, then the uncertainty for $x$ is 

$$u = \sqrt{\left(\dfrac{\partial x}{\partial x_1}u_{x_1}\right)^2 + \left(\dfrac{\partial x}{\partial x_2}u_{x_2}\right)^2} = \sqrt{u_{x_1}^2 + u_{x_2}^2}$$

The calculation can be disgusting. You need to first get the formula and then put the values into the formula. Directly showing the answer may receives deduction.

## Error Bar

For plotting figures, you need to add error bars, making the data points as followed:

<img src="images\1.png" style="zoom:50%;" />

Sometimes, the uncertainty is very small, and then the data points will become a cross

<img src="images\2.png" style="zoom:50%;" />

## Appendix

| $n$  | $t_{0.95}$ | $n$  | $t_{0.95}$  |   $n$   |   $t_{0.95}$   |   $n$   | $t_{0.95}$ |
| ---- | ---------- | ---- | ---- | ---- | ---- | ---- | ---------- |
| 1 | 12.706 | 12 | 2.179 | 23 | 2.069 | 34 | 2.032 |
| 2 | 4.303 | 13 | 2.160 | 24 | 2.064 | 35 | 2.030 |
| 3 | 3.182 | 14 | 2.145 | 25 | 2.060 | 36 | 2.028 |
| 4 | 2.776 | 15 | 2.131 | 26 | 2.056 | 37 | 2.026 |
| 5 | 2.571 | 16 | 2.120 | 27 | 2.052 | 38 | 2.024 |
| 6 | 2.447 | 17 | 2.110 | 28 | 2.048 | 39 | 2.023 |
| 7 | 2.365 | 18 | 2.101 | 29 | 2.045 | 40 | 2.021 |
| 8 | 2.306 | 19 | 2.093 | 30 | 2.042 | 41 | 2.020 |
| 9 | 2.262 | 20 | 2.086 | 31 | 2.040 | 42 | 2.018 |
| 10 | 2.228 | 21 | 2.080 | 32 | 2.037 | 43 | 2.017 |
| 11 | 2.201 | 22 | 2.074 | 33 | 2.035 | 44 | 2.015 |

