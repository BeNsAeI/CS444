TEX     = latex -shell-escape
DVIPS	= dvips
DVIPDF  = dvipdft
XDVI	= xdvi -gamma 4
GH		= gv
PDF2 = ps2pdf


all: writing


writing:
	$(LATEX) main.tex
	$(DVIPS) -R -Poutline -t letter main.dvi -o main.ps
	$(PDF2) main.ps


clean:
	rm -f *.pdf *.ps *.dvi *.out *.log *.aux *.bbl *.blg *.pyg

.PHONY: all show clean ps pdf showps
