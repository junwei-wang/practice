all: ex5-1.pdf ex5-2.pdf ex5-3.pdf
ex5-1.pdf: ex5-1.tex
	xelatex $^
ex5-2.pdf: ex5-2.tex
	xelatex $^
ex5-3.pdf: ex5-3.tex titlepage.tex
	xelatex $^
clean:
	rm *.pdf
	rm *.aux
	rm *.log
