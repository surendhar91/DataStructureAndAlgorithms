##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=cppGeeksForGeeks
ConfigurationName      :=Debug
WorkspacePath          := "E:\DS and Photos\DataStructureAndAlgorithms\GeeksForGeeks\CPP GeeksForGeeks"
ProjectPath            := "E:\DS and Photos\DataStructureAndAlgorithms\GeeksForGeeks\CPP GeeksForGeeks\cppGeeksForGeeks"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=surendhar-2481
Date                   :=22/12/2015
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
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
ObjectsFileList        :="cppGeeksForGeeks.txt"
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
AR       := ar rcus
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/queue.cpp$(ObjectSuffix) $(IntermediateDirectory)/binarytree.cpp$(ObjectSuffix) $(IntermediateDirectory)/binarysearchtree.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/CPP GeeksForGeeks/cppGeeksForGeeks/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/queue.cpp$(ObjectSuffix): queue.cpp $(IntermediateDirectory)/queue.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/CPP GeeksForGeeks/cppGeeksForGeeks/queue.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/queue.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/queue.cpp$(DependSuffix): queue.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/queue.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/queue.cpp$(DependSuffix) -MM "queue.cpp"

$(IntermediateDirectory)/queue.cpp$(PreprocessSuffix): queue.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/queue.cpp$(PreprocessSuffix) "queue.cpp"

$(IntermediateDirectory)/binarytree.cpp$(ObjectSuffix): binarytree.cpp $(IntermediateDirectory)/binarytree.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/CPP GeeksForGeeks/cppGeeksForGeeks/binarytree.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/binarytree.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/binarytree.cpp$(DependSuffix): binarytree.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/binarytree.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/binarytree.cpp$(DependSuffix) -MM "binarytree.cpp"

$(IntermediateDirectory)/binarytree.cpp$(PreprocessSuffix): binarytree.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/binarytree.cpp$(PreprocessSuffix) "binarytree.cpp"

$(IntermediateDirectory)/binarysearchtree.cpp$(ObjectSuffix): binarysearchtree.cpp $(IntermediateDirectory)/binarysearchtree.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/CPP GeeksForGeeks/cppGeeksForGeeks/binarysearchtree.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/binarysearchtree.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/binarysearchtree.cpp$(DependSuffix): binarysearchtree.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/binarysearchtree.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/binarysearchtree.cpp$(DependSuffix) -MM "binarysearchtree.cpp"

$(IntermediateDirectory)/binarysearchtree.cpp$(PreprocessSuffix): binarysearchtree.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/binarysearchtree.cpp$(PreprocessSuffix) "binarysearchtree.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


