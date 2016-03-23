##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Pessoa
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\FACOMP\Documents\Prog2"
ProjectPath            := "C:\Users\FACOMP\Documents\Prog2\Pessoa"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=FACOMP
Date                   :=23/03/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Pessoa.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcu
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Pessoa_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pessoa_Pessoa.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pessoa_Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pessoa_Endereco.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pessoa_PessoaFisica.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pessoa_PessoaJuridica.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pessoa_Cliente.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pessoa_Funcionario.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Pessoa_main.cpp$(ObjectSuffix): Pessoa/main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Documents/Prog2/Pessoa/Pessoa/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pessoa_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pessoa_main.cpp$(PreprocessSuffix): Pessoa/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pessoa_main.cpp$(PreprocessSuffix) "Pessoa/main.cpp"

$(IntermediateDirectory)/Pessoa_Pessoa.cpp$(ObjectSuffix): Pessoa/Pessoa.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Documents/Prog2/Pessoa/Pessoa/Pessoa.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pessoa_Pessoa.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pessoa_Pessoa.cpp$(PreprocessSuffix): Pessoa/Pessoa.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pessoa_Pessoa.cpp$(PreprocessSuffix) "Pessoa/Pessoa.cpp"

$(IntermediateDirectory)/Pessoa_Data.cpp$(ObjectSuffix): Pessoa/Data.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Documents/Prog2/Pessoa/Pessoa/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pessoa_Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pessoa_Data.cpp$(PreprocessSuffix): Pessoa/Data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pessoa_Data.cpp$(PreprocessSuffix) "Pessoa/Data.cpp"

$(IntermediateDirectory)/Pessoa_Endereco.cpp$(ObjectSuffix): Pessoa/Endereco.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Documents/Prog2/Pessoa/Pessoa/Endereco.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pessoa_Endereco.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pessoa_Endereco.cpp$(PreprocessSuffix): Pessoa/Endereco.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pessoa_Endereco.cpp$(PreprocessSuffix) "Pessoa/Endereco.cpp"

$(IntermediateDirectory)/Pessoa_PessoaFisica.cpp$(ObjectSuffix): Pessoa/PessoaFisica.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Documents/Prog2/Pessoa/Pessoa/PessoaFisica.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pessoa_PessoaFisica.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pessoa_PessoaFisica.cpp$(PreprocessSuffix): Pessoa/PessoaFisica.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pessoa_PessoaFisica.cpp$(PreprocessSuffix) "Pessoa/PessoaFisica.cpp"

$(IntermediateDirectory)/Pessoa_PessoaJuridica.cpp$(ObjectSuffix): Pessoa/PessoaJuridica.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Documents/Prog2/Pessoa/Pessoa/PessoaJuridica.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pessoa_PessoaJuridica.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pessoa_PessoaJuridica.cpp$(PreprocessSuffix): Pessoa/PessoaJuridica.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pessoa_PessoaJuridica.cpp$(PreprocessSuffix) "Pessoa/PessoaJuridica.cpp"

$(IntermediateDirectory)/Pessoa_Cliente.cpp$(ObjectSuffix): Pessoa/Cliente.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Documents/Prog2/Pessoa/Pessoa/Cliente.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pessoa_Cliente.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pessoa_Cliente.cpp$(PreprocessSuffix): Pessoa/Cliente.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pessoa_Cliente.cpp$(PreprocessSuffix) "Pessoa/Cliente.cpp"

$(IntermediateDirectory)/Pessoa_Funcionario.cpp$(ObjectSuffix): Pessoa/Funcionario.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Documents/Prog2/Pessoa/Pessoa/Funcionario.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pessoa_Funcionario.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pessoa_Funcionario.cpp$(PreprocessSuffix): Pessoa/Funcionario.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pessoa_Funcionario.cpp$(PreprocessSuffix) "Pessoa/Funcionario.cpp"

##
## Clean
##
clean:
	$(RM) -r ./Debug/


