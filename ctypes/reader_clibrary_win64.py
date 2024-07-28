import ctypes
#import platform

# -- Verificando Arquitetura -- 
#print(platform.architecture())

# -- Carrega a biblioteca DLL --
clibrary = ctypes.CDLL(r"C:\Users\natha\OneDrive\Documentos\DEV\DEV Test\Linguagens\C\C\ctypes\clibrary_win64.dll")

# --- Chama a função hello da biblioteca ---
clibrary.hello()

# --- Chama a função display da biblioteca com uma string de bytes e um inteiro ---
#clibrary.display(b"Natanael", 25) # prefixo 'b' é de fluxo binário.


# --- Chama a função display da biblioteca com variáveis ---
func = clibrary.display

func.argtypes = [ctypes.c_char_p, ctypes.c_int]
func.restype = ctypes.c_char_p

func(b"Natanael", 25)




