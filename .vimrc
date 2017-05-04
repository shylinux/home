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

Bundle 'mark'
Bundle 'a.vim'
Bundle 'mru.vim'
Bundle 'snipMate'
Bundle 'genutils'
Bundle 'goodlygeek/tabular'
Bundle 'tpope/vim-surround'
Bundle 'vim-scripts/vim-misc'
Bundle 'vim-scripts/grep.vim'
Bundle 'vim-scripts/vim-compile'
Bundle 'scrooloose/nerdcommenter'
Bundle 'easymotion/vim-easymotion'
Bundle 'terryma/vim-multiple-cursors'

Bundle 'jelera/vim-javascript-syntax'
Bundle 'evanmiller/nginx-vim-syntax'
Bundle 'ShowTrailingWhitespace'
Bundle 'airblade/vim-gitgutter'
Bundle 'vim-scripts/notes.vim'
Bundle 'scrooloose/syntastic'
Bundle 'tpope/vim-fugitive'
Bundle 'tpope/vim-endwise'
Bundle 'matrix.vim--Yang'
Bundle 'fatih/vim-go'

if version > 703
	Bundle 'jlanzarotta/bufexplorer'
	Bundle 'mbbill/echofunc'
endif
Bundle 'vim-scripts/easygrep'
Bundle 'vim-scripts/tComment'

"Bundle 'lookupfile'
"let g:LookupFile_MinPatLength = 2
"let g:LookupFile_TagExpr='"./tags.filename"'

" Bundle 'Valloric/YouCompleteMe'
" let g:ycm_server_python_interpreter='/usr/bin/python'
" let g:ycm_global_ycm_extra_conf='~/.vim/.ycm_extra_conf.py'

Bundle 'kien/ctrlp.vim'
let g:ctrlp_cmd='CtrlPBuffer'

Bundle 'OmniCppComplete'
let g:OmniCpp_DefaultNamespaces=["std"]
let g:OmniCpp_MayCompleteScope=1
let g:OmniCpp_SelectFirstItem=2

Bundle 'The-NERD-tree'
let g:NERDTreeWinPos="right"
let g:NERDTreeWinSize=35

Bundle 'Lokaltog/vim-powerline.git'
set t_Co=256
set laststatus=2
let g:Powerline_symbols='unicode'

Bundle 'majutsushi/tagbar'
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

"sudo apt-get install cscope
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

filetype on "{{{
filetype plugin on
filetype indent on
syntax on
colorscheme mycolor
let mapleader=";"

source ~/.vim_local
command! SL source ~/.vim_local
command! SV source ~/.vimrc

command! Mat execute "w |!make && sudo make install && sudo nginx -s stop && sudo nginx"
command! Proxy execute "!curl localhost/100837cb/0/1/http/127.0.0.1/80/hi.html"
command! MP execute "w |!make && sudo make install && sudo nginx -s stop && sudo nginx && curl localhost/100837cb/0/1/http/127.0.0.1/80/hi.html"
command! ME execute "w |!make && sudo make install && sudo nginx -s stop && sudo nginx && curl localhost/100837cb/0/1/http/127.0.0.1/80/he.html"

set keywordprg=man\ -a
set path+=/usr/local/go/src

set path+=/usr/local/include
set path+=/usr/include/x86_64-linux-gnu

set path+=~/vpn/nginx-1.4.1/objs
set path+=~/vpn/nginx-1.4.1/src/core
set path+=~/vpn/nginx-1.4.1/src/event
set path+=~/vpn/nginx-1.4.1/src/http
set path+=~/vpn/nginx-1.4.1/src/mail
set path+=~/vpn/nginx-1.4.1/src/misc
set path+=~/vpn/nginx-1.4.1/src/os
set path+=~/vpn/nginx-1.4.1/src/os/unix
set path+=~/vpn/nginx-1.4.1/src/http/modules
set path+=~/vpn/nginx-1.4.1/src/event/modules
"}}}
set number"{{{
set nowrap
"set relativenumber
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
set nowrapscan
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

fun! SetOperationMode() "{{{
	if exists("w:OperationMode") && w:OperationMode == 1
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
	else
		nnoremap <Space> :
		nnoremap f f
		nnoremap b b
		nnoremap u u
		nnoremap d d
		nnoremap e e
		nnoremap y y
		nnoremap w w
		nnoremap q q
		nnoremap p p
		nnoremap v v
		nnoremap r r
		nnoremap t t
		nnoremap i i
		nnoremap o o
		nnoremap a a
		nnoremap c c
		nnoremap s s
		nnoremap x x
	endif
endfun

fun! ChangeOperationMode()
	if !exists("w:OperationMode") || w:OperationMode == 0
		let w:OperationMode = 1
	else
		let w:OperationMode = 0
	endif
	call SetOperationMode()
endfun
nnoremap -- :call ChangeOperationMode()<CR>
autocmd WinEnter * call SetOperationMode()
"}}}
inoremap jk <Esc>"{{{
inoremap JK <Esc>
cnoremap jk <Esc>
cnoremap JK <Esc>
inoremap kl <CR>
inoremap KL <CR>
cnoremap kl <CR>
cnoremap KL <CR>
inoremap df ->
inoremap sd _
inoremap SD _
cnoremap sd _
cnoremap SD _

nnoremap j gj
nnoremap k gk
" inoremap ;; :
" inoremap " '
" inoremap ' "
" inoremap [ {
" inoremap { [
" inoremap ] }
" inoremap } ]
" inoremap 9 (
" inoremap ( 9
" inoremap 0 )
" inoremap ) 0
" inoremap 8 *
" inoremap * 8
" inoremap 7 &
" inoremap & 7
"
"nnoremap <C-M> <C-W>\|<C-W>_
"nnoremap <C-N> <C-W>=
"nnoremap <C-P> <C-W>p
"nnoremap <Leader>b <Leader>be

cnoremap w!! w !sudo tee %<CR>

nnoremap <C-H> <C-W>h
nnoremap <C-J> <C-W>j
nnoremap <C-K> <C-W>k
nnoremap <C-L> <C-W>l
nnoremap <Space> :

nmap w <Leader><Leader>w
nmap W <Leader><Leader>W
nmap e <Leader><Leader>e
nmap E <Leader><Leader>E
nmap b <Leader><Leader>b
nmap B <Leader><Leader>B
nmap f <Leader><Leader>f
nmap F <Leader><Leader>F
nmap t <Leader><Leader>t
nmap T <Leader><Leader>T

function! RunShell(Msg, Shell)
	echo a:Msg . '...'
	call system(a:Shell)
	echon 'done'
endfunction

function! GenarateTags()
	call RunShell("Delete old tags&cscope file", "rm cscope.* tags*")
	call RunShell("Generate cscope", "cscope -Rbq")
	cs add cscope.out
	call RunShell("Generate tags", "ctags -R --c++-kinds=+p --fields=+iaS --extra=+q .")
	call RunShell("Generate filename tags", "~/.vim/shell/genfiletags.sh")
	call HLUDSync()
endfunction

nnoremap <F2> :TlistToggle<CR>
autocmd BufNewFile,BufReadPost  *.go nnoremap <F2> :TagbarToggle<CR>
nnoremap <F3> :MRU<CR>
nnoremap <F4> :NERDTreeToggle<CR>

nnoremap <F5> :CtrlP .<CR>
nnoremap <F6> :vimgrep /<C-R>=expand("<cword>")<cr>/ **/*.c **/*.js **/*.html **/*.go **/*.h **/*.sh **/*.vim **/*.php <cr><C-o>:cw<cr>
nnoremap <F7> :cs find g <C-R>=expand("<cword>")<CR><CR>
nnoremap <F8> :cs find c <C-R>=expand("<cword>")<CR><CR>

"nnoremap <F9> :call RunShell("Generate cscope", "cscope -Rbq")<cr>:cs add cscope.out<cr>
"nnoremap <F10> :call RunShell("Generate tags", "ctags -R --c++-kinds=+p --fields=+iaS --extra=+q .")<cr>
"nnoremap <F11> :call RunShell("Generate filename tags", "~/.vim/shell/genfiletags.sh")<cr>
"nnoremap <F12> :call HLUDSync()<cr>
nnoremap <F10> :call GenarateTags()<cr>
nnoremap <F12> :call GenarateTags()<cr>
"}}}
