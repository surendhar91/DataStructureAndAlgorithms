##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=GeeksForGeeks
ConfigurationName      :=Release
WorkspacePath          := "E:\DS and Photos\DataStructureAndAlgorithms\GeeksForGeeks"
ProjectPath            := "E:\DS and Photos\DataStructureAndAlgorithms\GeeksForGeeks\GeeksForGeeks"
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=surendhar-2481
Date                   :=04/08/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=gcc
SharedObjectLinkerName :=gcc -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="GeeksForGeeks.txt"
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
CXX      := gcc
CC       := gcc
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/SinglyLinkedList.c$(ObjectSuffix) $(IntermediateDirectory)/dynamicProgram.c$(ObjectSuffix) $(IntermediateDirectory)/stack.c$(ObjectSuffix) $(IntermediateDirectory)/queue.c$(ObjectSuffix) $(IntermediateDirectory)/BinaryTree.c$(ObjectSuffix) $(IntermediateDirectory)/DoublyLinkedList.c$(ObjectSuffix) $(IntermediateDirectory)/TernarySearchTree.c$(ObjectSuffix) $(IntermediateDirectory)/SegmentTree.c$(ObjectSuffix) $(IntermediateDirectory)/commonOperations.c$(ObjectSuffix) \
	$(IntermediateDirectory)/Graphs.c$(ObjectSuffix) $(IntermediateDirectory)/BinarySearchTree.c$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Release"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Release"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c $(IntermediateDirectory)/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/GeeksForGeeks/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM "main.c"

$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) "main.c"

$(IntermediateDirectory)/SinglyLinkedList.c$(ObjectSuffix): SinglyLinkedList.c $(IntermediateDirectory)/SinglyLinkedList.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/GeeksForGeeks/SinglyLinkedList.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SinglyLinkedList.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SinglyLinkedList.c$(DependSuffix): SinglyLinkedList.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SinglyLinkedList.c$(ObjectSuffix) -MF$(IntermediateDirectory)/SinglyLinkedList.c$(DependSuffix) -MM "SinglyLinkedList.c"

$(IntermediateDirectory)/SinglyLinkedList.c$(PreprocessSuffix): SinglyLinkedList.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SinglyLinkedList.c$(PreprocessSuffix) "SinglyLinkedList.c"

$(IntermediateDirectory)/dynamicProgram.c$(ObjectSuffix): dynamicProgram.c $(IntermediateDirectory)/dynamicProgram.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/GeeksForGeeks/dynamicProgram.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/dynamicProgram.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/dynamicProgram.c$(DependSuffix): dynamicProgram.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/dynamicProgram.c$(ObjectSuffix) -MF$(IntermediateDirectory)/dynamicProgram.c$(DependSuffix) -MM "dynamicProgram.c"

$(IntermediateDirectory)/dynamicProgram.c$(PreprocessSuffix): dynamicProgram.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/dynamicProgram.c$(PreprocessSuffix) "dynamicProgram.c"

$(IntermediateDirectory)/stack.c$(ObjectSuffix): stack.c $(IntermediateDirectory)/stack.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/GeeksForGeeks/stack.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/stack.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/stack.c$(DependSuffix): stack.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/stack.c$(ObjectSuffix) -MF$(IntermediateDirectory)/stack.c$(DependSuffix) -MM "stack.c"

$(IntermediateDirectory)/stack.c$(PreprocessSuffix): stack.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/stack.c$(PreprocessSuffix) "stack.c"

$(IntermediateDirectory)/queue.c$(ObjectSuffix): queue.c $(IntermediateDirectory)/queue.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/GeeksForGeeks/queue.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/queue.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/queue.c$(DependSuffix): queue.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/queue.c$(ObjectSuffix) -MF$(IntermediateDirectory)/queue.c$(DependSuffix) -MM "queue.c"

$(IntermediateDirectory)/queue.c$(PreprocessSuffix): queue.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/queue.c$(PreprocessSuffix) "queue.c"

$(IntermediateDirectory)/BinaryTree.c$(ObjectSuffix): BinaryTree.c $(IntermediateDirectory)/BinaryTree.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/GeeksForGeeks/BinaryTree.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/BinaryTree.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/BinaryTree.c$(DependSuffix): BinaryTree.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/BinaryTree.c$(ObjectSuffix) -MF$(IntermediateDirectory)/BinaryTree.c$(DependSuffix) -MM "BinaryTree.c"

$(IntermediateDirectory)/BinaryTree.c$(PreprocessSuffix): BinaryTree.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/BinaryTree.c$(PreprocessSuffix) "BinaryTree.c"

$(IntermediateDirectory)/DoublyLinkedList.c$(ObjectSuffix): DoublyLinkedList.c $(IntermediateDirectory)/DoublyLinkedList.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/GeeksForGeeks/DoublyLinkedList.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DoublyLinkedList.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DoublyLinkedList.c$(DependSuffix): DoublyLinkedList.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DoublyLinkedList.c$(ObjectSuffix) -MF$(IntermediateDirectory)/DoublyLinkedList.c$(DependSuffix) -MM "DoublyLinkedList.c"

$(IntermediateDirectory)/DoublyLinkedList.c$(PreprocessSuffix): DoublyLinkedList.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DoublyLinkedList.c$(PreprocessSuffix) "DoublyLinkedList.c"

$(IntermediateDirectory)/TernarySearchTree.c$(ObjectSuffix): TernarySearchTree.c $(IntermediateDirectory)/TernarySearchTree.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/GeeksForGeeks/TernarySearchTree.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TernarySearchTree.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TernarySearchTree.c$(DependSuffix): TernarySearchTree.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TernarySearchTree.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TernarySearchTree.c$(DependSuffix) -MM "TernarySearchTree.c"

$(IntermediateDirectory)/TernarySearchTree.c$(PreprocessSuffix): TernarySearchTree.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TernarySearchTree.c$(PreprocessSuffix) "TernarySearchTree.c"

$(IntermediateDirectory)/SegmentTree.c$(ObjectSuffix): SegmentTree.c $(IntermediateDirectory)/SegmentTree.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/GeeksForGeeks/SegmentTree.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SegmentTree.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SegmentTree.c$(DependSuffix): SegmentTree.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SegmentTree.c$(ObjectSuffix) -MF$(IntermediateDirectory)/SegmentTree.c$(DependSuffix) -MM "SegmentTree.c"

$(IntermediateDirectory)/SegmentTree.c$(PreprocessSuffix): SegmentTree.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SegmentTree.c$(PreprocessSuffix) "SegmentTree.c"

$(IntermediateDirectory)/commonOperations.c$(ObjectSuffix): commonOperations.c $(IntermediateDirectory)/commonOperations.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/GeeksForGeeks/commonOperations.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/commonOperations.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/commonOperations.c$(DependSuffix): commonOperations.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/commonOperations.c$(ObjectSuffix) -MF$(IntermediateDirectory)/commonOperations.c$(DependSuffix) -MM "commonOperations.c"

$(IntermediateDirectory)/commonOperations.c$(PreprocessSuffix): commonOperations.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/commonOperations.c$(PreprocessSuffix) "commonOperations.c"

$(IntermediateDirectory)/Graphs.c$(ObjectSuffix): Graphs.c $(IntermediateDirectory)/Graphs.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/GeeksForGeeks/Graphs.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Graphs.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Graphs.c$(DependSuffix): Graphs.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Graphs.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Graphs.c$(DependSuffix) -MM "Graphs.c"

$(IntermediateDirectory)/Graphs.c$(PreprocessSuffix): Graphs.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Graphs.c$(PreprocessSuffix) "Graphs.c"

$(IntermediateDirectory)/BinarySearchTree.c$(ObjectSuffix): BinarySearchTree.c $(IntermediateDirectory)/BinarySearchTree.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/DS and Photos/DataStructureAndAlgorithms/GeeksForGeeks/GeeksForGeeks/BinarySearchTree.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/BinarySearchTree.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/BinarySearchTree.c$(DependSuffix): BinarySearchTree.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/BinarySearchTree.c$(ObjectSuffix) -MF$(IntermediateDirectory)/BinarySearchTree.c$(DependSuffix) -MM "BinarySearchTree.c"

$(IntermediateDirectory)/BinarySearchTree.c$(PreprocessSuffix): BinarySearchTree.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/BinarySearchTree.c$(PreprocessSuffix) "BinarySearchTree.c"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Release/


