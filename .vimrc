"sudo apt-get install vim"{{{
"sudo apt-get install git
"git clone https://github.com/gmarik/vundle.git ~/.vim/bundle/vundle
filetype off
set nocompatible
set rtp+=~/.vim/bundle/vundle/
call vundle#rc()

Bundle 'gmarik/vundle'
"BundleInstall
"BundleClean

Bundle 'matrix.vim--Yang'
"Matrix


"sudo apt-get install linux-source
"sudo apt-get install exuberant-ctags
"ctags -R --c++-kinds=+p --field=+iaS .
"set tags+=./
if has("win16") || has("win32") || has("win64") || has("win95") || has("win32unix")

else
	Bundle 'taglist.vim'
	let g:Tlist_Auto_Update=1
	let g:Tlist_Process_File_Always=1
	let g:Tlist_Exit_OnlyWindow=1
	let g:Tlist_Show_One_File=1
	let g:Tlist_WinWidth=45
	let g:Tlist_Enable_Fold_Column=0
	let g:Tlist_Auto_Highlight_Tag=1

endif
"Bundle 'majutsushi/tagbar'
Bundle 'Lokaltog/vim-powerline.git'
set t_Co=256
set laststatus=2
let g:Powerline_symbols='unicode'

Bundle 'OmniCppComplete'
let g:OmniCpp_DefaultNamespaces=["std"]
let g:OmniCpp_MayCompleteScope=1
let g:OmniCpp_SelectFirstItem=2

"Bundle 'mbbill/echofunc'

"Bundle 'snipMate.zip'

Bundle 'snipMate'

Bundle 'genutils'

Bundle 'lookupfile'
let g:LookupFile_MinPatLength = 2
let g:LookupFile_TagExpr='"./tags.filename"'

Bundle 'The-NERD-tree'
let g:NERDTreeWinPos="right"
let g:NERDTreeWinSize=35
let g:NERDTreeShowLineNumbers=1
let g:NERDTreeQuitOnOpen=1

Bundle 'mru.vim'

Bundle 'bufexplorer.zip'

Bundle 'mark'

Bundle 'fatih/vim-go'
Bundle 'tagbar'
let g:tagbar_type_go = {  
    \ 'ctagstype' : 'go',  
    \ 'kinds'     : [  
        \ 'p:package',  
        \ 'i:imports:1',  
        \ 'c:constants',  
        \ 'v:variables',  
        \ 't:types',  
        \ 'n:interfaces',  
        \ 'w:fields',  
        \ 'e:embedded',  
        \ 'm:methods',  
        \ 'r:constructor',  
        \ 'f:functions'  
    \ ],  
    \ 'sro' : '.',  
    \ 'kind2scope' : {  
        \ 't' : 'ctype',  
        \ 'n' : 'ntype'  
    \ },  
    \ 'scope2kind' : {  
        \ 'ctype' : 't',  
        \ 'ntype' : 'n'  
    \ },  
    \ 'ctagsbin'  : 'gotags',  
    \ 'ctagsargs' : '-sort -silent'  
\ }  
Bundle 'a.vim'
"}}}

"sudo apt-get install cscope"{{{
"sudo cscope -Rbq
if has("cscope")
	set csto=1
	set cst
	set nocsverb
	if filereadable("cscope.out")
		cs add cscope.out
	endif
	set csverb
endif
"}}}

filetype on
filetype plugin on 
filetype indent on

syntax on
colorscheme mycolor

set path+=/usr/local/go/src

set number"{{{
set nowrap
set cursorline
set cursorcolumn
set cc=80
set ruler
set showcmd
set showmode
set scrolloff=3
set backspace=indent,eol,start
set mouse=a

set tabstop=4
set shiftwidth=4
set smarttab
set noexpandtab
set autoindent
set cindent
set smartindent

set hidden
set nobackup
"set autoread
set autowrite
"set autochdir
set fileformat=unix
set encoding=utf-8

set showmatch
set matchtime=2
set hlsearch
set incsearch
set ignorecase
set smartcase

set foldenable
set foldmethod=marker

set guioptions-=T
set guioptions-=m
set guioptions-=r
set guioptions-=l

autocmd BufReadPost *
	\ if line("'\"") > 0 && line("'\"") <= line("$") |
	\	exe "normal g'\"" |
	\ endif

"}}}

let s:Operation_Close=1"{{{
function ChangeOperationMode()
	if s:Operation_Close
		nnoremap <Space> <C-F>
		nnoremap f <C-F>
		nnoremap b <C-B>
		nnoremap u <C-U>
		nnoremap d <C-D>
		nnoremap e <C-E>
		nnoremap y <C-Y>
		nnoremap w <C-W>
		nnoremap q :TlistToggle<CR>
		nnoremap p :NERDTreeToggle<CR>
		nnoremap v :MRU<CR>
		nnoremap r <C-]>
		nnoremap t <C-T>
		nnoremap i <C-I>
		nnoremap o <C-O>
		nnoremap a :cs find g <C-R>=expand("<cword>")<CR><CR>
		nnoremap c :cs find c <C-R>=expand("<cword>")<CR><CR>
		nnoremap s :cs find s <C-R>=expand("<cword>")<CR><CR>
		nnoremap x :cs find e <C-R>=expand("<cword>")<CR><CR>
		let s:Operation_Close=0
	else
		nnoremap <Space> :
		nunmap f
		nunmap b
		nunmap u
		nunmap d
		nunmap e
		nunmap y
		nunmap w
		nunmap q
		nunmap p
		nunmap v
		nunmap r
		nunmap t
		nunmap i
		nunmap o
		nunmap a
		nunmap c
		nunmap s
		nunmap x
		let s:Operation_Close=1
	endif
endf
nnoremap -- :call ChangeOperationMode()<CR>"}}}

inoremap jk <Esc>"{{{
cnoremap jk <CR>
nnoremap j gj
nnoremap k gk
let mapleader=";"
"nnoremap <Leader>b <Leader>be

cnoremap w!! w !sudo tee %<CR>

nnoremap <C-H> <C-W>h
nnoremap <C-J> <C-W>j
nnoremap <C-K> <C-W>k
nnoremap <C-L> <C-W>l
nnoremap <Space> :

function! RunShell(Msg, Shell)
	echo a:Msg . '...'
	call system(a:Shell)
	echon 'done'
endfunction

function! GenarateTags()
	call RunShell("Generate cscope", "cscope -Rbq")
	cs add cscope.out
	call RunShell("Generate tags", "ctags -R --c++-kinds=+p --fields=+iaS --extra=+q .")
	call RunShell("Generate filename tags", "~/.vim/shell/genfiletags.sh")
	call HLUDSync()
endfunction

nnoremap <F2> :TlistToggle<CR>
"nnoremap <F2> :TagbarToggle<CR>
nnoremap <F3> :NERDTreeToggle<CR>
nnoremap <F4> :MRU<CR>
nnoremap <F6> :vimgrep /<C-R>=expand("<cword>")<cr>/ **/*.c **/*.h **/*.sh **/*.vim<cr><C-o>:cw<cr>
nnoremap <F7> :cs find g <C-R>=expand("<cword>")<CR><CR>
nnoremap <F8> :cs find c <C-R>=expand("<cword>")<CR><CR>
"nnoremap <F9> :call RunShell("Generate cscope", "cscope -Rbq")<cr>:cs add cscope.out<cr>
"nnoremap <F10> :call RunShell("Generate tags", "ctags -R --c++-kinds=+p --fields=+iaS --extra=+q .")<cr>
"nnoremap <F11> :call RunShell("Generate filename tags", "~/.vim/shell/genfiletags.sh")<cr>
"nnoremap <F12> :call HLUDSync()<cr>
nnoremap <F12> :call GenarateTags()<cr>

autocmd BufNewFile,BufReadPost  *.go nnoremap <F2> :TagbarToggle<CR>
"}}}
