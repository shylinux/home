" local syntax file - set colors on a per-machine basis:
" vim: tw=0 ts=4 sw=4
" Vim color file
" Maintainer:	Ron Aaron <ron@ronware.org>
" Last Change:	2003 May 02

set background=dark
hi clear
if exists("syntax_on")
  syntax reset
endif
let g:colors_name = "mycolor"
hi Normal													guifg=cyan		guibg=black
hi Comment		ctermfg=DarkCyan	term=bold				guifg=#80a0ff
hi Constant		ctermfg=Magenta		term=underline			guifg=Magenta
hi Special		ctermfg=DarkMagenta	term=bold				guifg=Red
hi Identifier	ctermfg=Cyan		term=underline			guifg=#40ffff
hi Statement	ctermfg=Yellow		term=bold				guifg=#aa4444	gui=bold
hi PreProc		ctermfg=LightBlue	term=underline			guifg=#ff80ff
hi Type			ctermfg=LightGreen	term=underline			guifg=#60ff60	gui=bold
hi Function		ctermfg=White		term=bold				guifg=White
hi Repeat		ctermfg=Yellow		term=underline			guifg=Yellow
hi Operator		ctermfg=Red									guifg=Red
hi Ignore		ctermfg=black								guifg=bg
hi Error		ctermfg=White ctermbg=Red term=reverse		guifg=White 	guibg=Red
hi Todo			ctermfg=Black ctermbg=Yellow term=standout	guifg=Blue		guibg=Yellow

" Common groups that link to default highlighting.
" You can specify other highlighting easily.
hi link String			Constant
hi link Character		Constant
hi link Number			Constant
hi link Boolean			Constant
hi link Float			Number
hi link Conditional		Repeat
hi link Label			Statement
hi link Keyword			Statement
hi link Exception		Statement
hi link Include			PreProc
hi link Define			PreProc
hi link Macro			PreProc
hi link PreCondit		PreProc
hi link StorageClass	Type
hi link Structure		Type
hi link Typedef			Type
hi link Tag				Special
hi link SpecialChar		Special
hi link Delimiter		Special
hi link SpecialComment	Special
hi link Debug			Special
