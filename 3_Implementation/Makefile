PROJ_NAME = SDLC

BUILD_DIR = Build

SRC = src\ampacity.c\
src\derating.c\
src\voltagedrop.c\
src\Equivalent_Impedance.c\
src\Power_Factor.c\
src\Source_Transformation.c\
src\Star_Delta_Conversion.c\
src\division.c\
src\parallel.c\
src\series.c\
src\Circular_Convo_FFT.c\
src\display.c\
src\function.c\
src\maincode.c\

# All test source files
TEST_SRC = src\ampacity.c\
src\derating.c\
src\voltagedrop.c\
src\Equivalent_Impedance.c\
src\Power_Factor.c\
src\Source_Transformation.c\
src\Star_Delta_Conversion.c\
src\division.c\
src\parallel.c\
src\series.c\
src\display.c\
test/test.c\
unity/unity.c\

INC = -I inc

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)

doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/html