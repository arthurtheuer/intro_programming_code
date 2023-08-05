# 4. &nbsp; Titanic and bacterial SNP data set analyses
This project encompasses a series of Jupyter notebooks showcasing data analysis and machine learning tasks using Python. The Jupyter notebooks cover diverse topics, including the analysis of the Titanic passenger data set with PCA and logistic regression for survival prediction, and analyzing single-nucleotide polymorphisms (SNPs) in bacterial mutants using linear modeling to predict growth rate.

## File descriptions
#### `sandbox.ipynb`
Jupyter notebook with introductory Python code highlighting the differences to more low-level programming languages such as C.

#### `titanic.ipynb`
Jupyter notebook containing code to read the Titanic passenger training data set and analyze it, including a PCA and a logistic regression to predict survival of the passengers in the test data set.

#### `mutants.ipynb`
Jupyter notebook for the analysis of single-nucleotide polymorphisms (SNPs) of bacterial mutants, which includes reading HDF5 files, calculating mutation frequency and SNP significance and building a linear model to predict the phenotype (= growth rate) of the bacteria.

## Dependencies
These projects require the following Python libraries:
`numpy`
`pandas`
`matplotlib`
`scipy`
`sklearn`
`h5py`

They can be installed using PIP:
```
pip install numpy pandas matplotlib scipy scikit-learn h5py
```

## Installation
Re-running the analyses in these notebooks requires an installation of Python 3 and the libraries mentioned above. To preserve the file structure, clone this repository to your local machine or download the respective files and ensure that they can be read by the scripts.

## Usage
The notebooks are annotated and self-explanatory. The files that are used can be exchanged for different data sets of the same structure to repeat the analyses on a different data set, which would require further modifications to the code.

When running the `mutants.ipynb` notebook, two files are saved. `sig_snps.csv` contains the most common SNPs, while `sig_p_vals.csv` contains the *p*-values calculated to assess the significance of the SNPs found.

## Contributing
If you want to contribute to this project, found any bugs or have new feature ideas, please open an issue!

## License
This project is licensed under the **GNU General Public License v3.0**, allowing you to freely use, modify, and distribute the code. Any derived works must also be licensed under GPL-3.0, promoting open-source collaboration and transparency. Please review the license terms before using or contributing to this project.
