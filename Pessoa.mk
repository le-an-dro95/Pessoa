##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Pessoa
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\ledri\Desktop\prog2"
ProjectPath            := "C:\Users\ledri\Desktop\prog2\Pessoa"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ledri
Date                   :=19/02/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
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
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
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
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Pessoa_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pessoa_Pessoa.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pessoa_Data.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/Pessoa_main.cpp$(ObjectSuffix): Pessoa/main.cpp $(IntermediateDirectory)/Pessoa_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/prog2/Pessoa/Pessoa/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pessoa_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pessoa_main.cpp$(DependSuffix): Pessoa/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Pessoa_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Pessoa_main.cpp$(DependSuffix) -MM "Pessoa/main.cpp"

$(IntermediateDirectory)/Pessoa_main.cpp$(PreprocessSuffix): Pessoa/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pessoa_main.cpp$(PreprocessSuffix) "Pessoa/main.cpp"

$(IntermediateDirectory)/Pessoa_Pessoa.cpp$(ObjectSuffix): Pessoa/Pessoa.cpp $(IntermediateDirectory)/Pessoa_Pessoa.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/prog2/Pessoa/Pessoa/Pessoa.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pessoa_Pessoa.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pessoa_Pessoa.cpp$(DependSuffix): Pessoa/Pessoa.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Pessoa_Pessoa.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Pessoa_Pessoa.cpp$(DependSuffix) -MM "Pessoa/Pessoa.cpp"

$(IntermediateDirectory)/Pessoa_Pessoa.cpp$(PreprocessSuffix): Pessoa/Pessoa.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pessoa_Pessoa.cpp$(PreprocessSuffix) "Pessoa/Pessoa.cpp"

$(IntermediateDirectory)/Pessoa_Data.cpp$(ObjectSuffix): Pessoa/Data.cpp $(IntermediateDirectory)/Pessoa_Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/prog2/Pessoa/Pessoa/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pessoa_Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pessoa_Data.cpp$(DependSuffix): Pessoa/Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Pessoa_Data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Pessoa_Data.cpp$(DependSuffix) -MM "Pessoa/Data.cpp"

$(IntermediateDirectory)/Pessoa_Data.cpp$(PreprocessSuffix): Pessoa/Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pessoa_Data.cpp$(PreprocessSuffix) "Pessoa/Data.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


