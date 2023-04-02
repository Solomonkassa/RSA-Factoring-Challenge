# RSA Factoring Challenge

The RSA Factoring Challenge is a cryptographic challenge proposed by RSA Security in 1991. The challenge consists of a set of semiprime numbers, and the goal is to factorize them into their prime factors. The challenge was designed to demonstrate the strength of the RSA encryption algorithm and the difficulty of factoring large semiprimes.

This repository contains a Python program that attempts to factorize one of the semiprimes from the RSA Factoring Challenge. The program uses the General Number Field Sieve (GNFS) algorithm to factorize the number.

## Requirements

- Python 3.6 or later
- SymPy library (`pip install sympy`)

## Usage

To run the program, simply execute the following command in the terminal:

```sh
python rsa_factoring_challenge.py
