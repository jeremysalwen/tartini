cmake_minimum_required(VERSION 3.11.4)
project(tartini)

#set(CMAKE_VERBOSE ON)
#set(CMAKE_VERBOSE_MAKEFILE ON)
#set(CMAKE_CXX_STANDARD 11)

set(USE_DEBUG_PRINTF OFF)

set(MY_HEADER_FILES
    main.h
    widgets/application.h
    widgets/application.hpp
    sound/sound_stream.h
    sound/sound_stream.hpp
    sound/wave_stream.h
    sound/sound_file_stream.h
    sound/sound_file_stream.hpp
    sound/audio_thread.h
    sound/audio_thread.hpp
    general/myio.h
    general/useful.h
    general/useful.hpp
    general/mystring.h
    general/settings.h
    general/bspline.h
    include/freqpair.h
    widgets/ledindicator.h
    widgets/drawwidget.h
    widgets/viewwidget.h
    widgets/myscrollbar.h
    widgets/myscrollbar.hpp
    widgets/mainwindow/mainwindow.h
    widgets/mainwindow/viewdata.h
    widgets/openfiles/openfiles.h
    widgets/freq/freqdrawwidget.h
    widgets/freq/freqwidgetGL.h
    widgets/freq/freqwidgetGL.hpp
    widgets/freq/freqview.h
    widgets/pitchcompass/pitchcompassview.h
    widgets/pitchcompass/pitchcompassdrawwidget.h
    widgets/summary/summarydrawwidget.h
    widgets/summary/summaryview.h
    widgets/tuner/tunerview.h
    widgets/tuner/tunerwidget.h
    widgets/hblock/hblockview.h
    widgets/hblock/hblockwidget.h
    widgets/hstack/hstackview.h
    widgets/hstack/hstackwidget.h
    widgets/hbubble/hbubbleview.h
    widgets/hbubble/hbubblewidget.h
    widgets/hcircle/hcircleview.h
    widgets/hcircle/hcirclewidget.h
    widgets/wave/waveview.h
    widgets/wave/wavewidget.h
    global/gdata.h
    global/gdata.hpp
    sound/filters/Filter.h
    sound/filters/IIR_Filter.h
    sound/filters/FixedAveragingFilter.h
    sound/filters/GrowingAveragingFilter.h
    sound/filters/FastSmoothedAveragingFilter.h
    include/array1d.h
    include/array1d.hpp
    include/array2d.h
    sound/channel.h
    sound/channel.hpp
    sound/soundfile.h
    global/view.h
    global/view.hpp
    include/myqmutex.h
    general/mytransforms.h
    general/mytransforms.hpp
    widgets/timeaxis.h
    widgets/timeaxis.hpp
    sound/analysisdata.h
    sound/analysisdata.hpp
    sound/soundfile.h
    sound/soundfile.hpp
    widgets/volumemeter/volumemeterview.h
    widgets/volumemeter/volumemeterwidget.h
    include/myassert.h
    sound/zoomlookup.h
    sound/zoomlookup.hpp
    dialogs/savedialog.h
    dialogs/opendialog.h
    general/equalloudness.h
    widgets/piano/pianowidget.h
    widgets/piano/pianowidget.hpp
    widgets/freq/amplitudewidget.h
    widgets/freq/amplitudewidget.hpp
    widgets/piano/pianoview.h
    widgets/htrack/htrackview.h
    widgets/htrack/htrackwidget.h
    widgets/htrack/htrackwidget.hpp
    widgets/htrack/piano3d.h
    widgets/htrack/piano3d.hpp
    widgets/correlation/correlationview.h
    widgets/correlation/correlationwidget.h
    widgets/fft/fftwidget.h
    widgets/fft/fftview.h
    widgets/cepstrum/cepstrumwidget.h
    widgets/cepstrum/cepstrumview.h
    sound/notedata.h
    sound/notedata.hpp
    general/large_vector.h
    general/large_vector.hpp
    widgets/mylabel.h
    widgets/mylabel.hpp
    general/fast_smooth.h
    general/fast_smooth.hpp
    global/conversions.h
    widgets/debugview/debugwidget.h
    widgets/debugview/debugview.h
    widgets/score/scorewidget.h
    widgets/score/scorewidget.hpp
    widgets/score/scoreview.h
    widgets/score/scoresegmentiterator.h
    widgets/score/scoresegmentiterator.hpp
    dialogs/tartinisettingsdialog.h
    widgets/vibrato/vibratowidget.h
    widgets/vibrato/vibratoview.h
    widgets/vibrato/vibratotunerwidget.h
    widgets/vibrato/vibratotimeaxis.h
    widgets/vibrato/vibratospeedwidget.h
    widgets/vibrato/vibratoperiodwidget.h
    widgets/vibrato/vibratocirclewidget.h
    include/safe_bool.h
    include/SmartPtr.h
    general/prony.h
    general/mymatrix.h
    general/mymatrix.hpp
    general/myglfonts.h
    general/myglfonts.hpp
    general/mygl.h
    general/mygl.hpp
    general/myqt.h
    general/musicnotes.h
    general/musicnotes.hpp
    general/myalgo.h
    include/RingBuffer.h
    general/music_scale.h
    general/music_scale.hpp
    general/music_key.h
    general/music_key.hpp
    dialogs/tartinidialog.h
    dialogs/gpldialog.h
   )

set(MY_SOURCE_FILES
    main.cpp
    sound/wave_stream.cpp
    sound/audio_thread.cpp
    general/myio.cpp
    sound/filters/IIR_Filter.cpp
    sound/filters/FixedAveragingFilter.cpp
    sound/filters/GrowingAveragingFilter.cpp
    sound/filters/FastSmoothedAveragingFilter.cpp
    sound/channel.cpp
    sound/soundfile.cpp
    general/useful.cpp
    general/mystring.cpp
    general/settings.cpp
    general/bspline.cpp
    widgets/ledindicator.cpp
    widgets/drawwidget.cpp
    widgets/myscrollbar.cpp
    widgets/viewwidget.cpp
    widgets/mainwindow/mainwindow.cpp
    widgets/mainwindow/viewdata.cpp
    widgets/openfiles/openfiles.cpp
    widgets/freq/freqdrawwidget.cpp
    widgets/freq/freqwidgetGL.cpp
    widgets/freq/freqview.cpp
    widgets/pitchcompass/pitchcompassview.cpp
    widgets/pitchcompass/pitchcompassdrawwidget.cpp
    widgets/summary/summarydrawwidget.cpp
    widgets/summary/summaryview.cpp
    widgets/tuner/tunerview.cpp
    widgets/tuner/tunerwidget.cpp
    widgets/hblock/hblockview.cpp
    widgets/hblock/hblockwidget.cpp
    widgets/hstack/hstackview.cpp
    widgets/hstack/hstackwidget.cpp
    widgets/hbubble/hbubbleview.cpp
    widgets/hbubble/hbubblewidget.cpp
    widgets/hcircle/hcircleview.cpp
    widgets/hcircle/hcirclewidget.cpp
    widgets/wave/waveview.cpp
    widgets/wave/wavewidget.cpp
    global/gdata.cpp
    cleanup.c
    global/view.cpp
    sound/sound_stream.cpp
    general/mytransforms.cpp
    widgets/timeaxis.cpp
    sound/analysisdata.cpp
    widgets/volumemeter/volumemeterview.cpp
    widgets/volumemeter/volumemeterwidget.cpp
    sound/zoomlookup.cpp
    dialogs/savedialog.cpp
    dialogs/opendialog.cpp
    general/equalloudness.cpp
    widgets/piano/pianowidget.cpp
    widgets/freq/amplitudewidget.cpp
    widgets/piano/pianoview.cpp
    widgets/htrack/htrackview.cpp
    widgets/htrack/htrackwidget.cpp
    widgets/htrack/piano3d.cpp
    widgets/correlation/correlationview.cpp
    widgets/correlation/correlationwidget.cpp
    widgets/fft/fftwidget.cpp
    widgets/fft/fftview.cpp
    widgets/cepstrum/cepstrumwidget.cpp
    widgets/cepstrum/cepstrumview.cpp
    sound/notedata.cpp
    widgets/mylabel.cpp
    general/fast_smooth.cpp
    global/conversions.cpp
    widgets/debugview/debugwidget.cpp
    widgets/debugview/debugview.cpp
    widgets/score/scorewidget.cpp
    widgets/score/scoreview.cpp
    widgets/score/scoresegmentiterator.cpp
    dialogs/tartinisettingsdialog.cpp
    widgets/vibrato/vibratowidget.cpp
    widgets/vibrato/vibratoview.cpp
    widgets/vibrato/vibratotunerwidget.cpp
    widgets/vibrato/vibratotimeaxis.cpp
    widgets/vibrato/vibratospeedwidget.cpp
    widgets/vibrato/vibratoperiodwidget.cpp
    widgets/vibrato/vibratocirclewidget.cpp
    general/prony.cpp
    general/mymatrix.cpp
    general/myglfonts.cpp
    general/myqt.cpp
    general/musicnotes.cpp
    general/myalgo.cpp
    general/music_scale.cpp
    general/music_key.cpp
    dialogs/tartinidialog.cpp
    dialogs/gpldialog.cpp
   )

# List header directories in project
set(MY_INCLUDE_DIRECTORIES
    .
    include
    general
    sound
    widgets
    global
    dialogs
    widgets/mainwindow
    widgets/freq
    widgets/summary
    widgets/pitchcompass
    widgets/openfiles
    widgets/volumemeter
    widgets/tuner
    widgets/hblock
    widgets/hstack
    widgets/wave
    widgets/piano
    widgets/htrack
    widgets/correlation
    widgets/fft
    widgets/cepstrum
    widgets/hbubble
    widgets/hcircle
    widgets/debugview
    widgets/score
    widgets/vibrato
    sound/filters
    )

set(MY_CPP_FLAGS -Wall -O0 -D_REENTRANT -DSINGLE_DRAWING_BUFFER -DMYDEBUG)
if(${USE_DEBUG_PRINTF})
    set(MY_CPP_FLAGS ${MY_CPP_FLAGS} -DDEBUG_PRINTF)
endif(${USE_DEBUG_PRINTF})

# Specific to Linux and MacOs
if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux" OR ${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
    set(MY_HEADER_FILES
        ${MY_HEADER_FILES}
        rtAudio/audio_stream.h
        rtAudio/RtAudio.h
        rtAudio/RtError.h
       )
    set(MY_SOURCE_FILES
        ${MY_SOURCE_FILES}
        rtAudio/audio_stream.cpp
        rtAudio/RtAudio.cpp
       )
    set(MY_INCLUDE_DIRECTORIES
        ${MY_INCLUDE_DIRECTORIES}
        rtAudio
       )
endif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux" OR ${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
# Specific to Linux
if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    set(MY_CPP_FLAGS
        ${MY_CPP_FLAGS}
        -D__LINUX_OSS__ -D__LINUX_ALSA__ -DLINUX
       )
endif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")

# Precompiled header in qmake
foreach(src_file ${MY_SOURCE_FILES})
    set_source_files_properties(${src_file} PROPERTIES COMPILE_FLAGS "-include include/static.h")
endforeach(src_file ${MY_SOURCE_FILES})

set(MY_SOURCE_FILES ${MY_SOURCE_FILES} ${MY_HEADER_FILES})


# Qt Manangement
#-----------------
find_package( Qt5 COMPONENTS Core Widgets OpenGL PrintSupport Gui REQUIRED)
#include( ${QT_USE_FILE} )
add_definitions( ${QT_DEFINITIONS} )
include_directories( ${CMAKE_BINARY_DIR} )

set(MY_SOURCE_FILES
    ${MY_SOURCE_FILES}
    pitch.qrc
    )

set(MY_SOURCE_FILES
    ${MY_SOURCE_FILES}
    dialogs/settingsdialog.ui
    )

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Pthread Manangement
#-----------------
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

# OpenGL Manangement
#-----------------
find_package(OpenGL REQUIRED OpenGL)
if(NOT ${OPENGL_GLU_FOUND})
    message(SEND_ERROR "OpenGL::GLU not found")
endif(NOT ${OPENGL_GLU_FOUND})
set(MY_INCLUDE_DIRECTORIES
    ${MY_INCLUDE_DIRECTORIES}
    ${OPENGL_INCLUDE_DIR}/GL
   )

# Qwt Manangement
#-----------------
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Modules)
find_package(Qwt REQUIRED)
set(MY_INCLUDE_DIRECTORIES
    ${MY_INCLUDE_DIRECTORIES}
    ${Qwt_INCLUDE_DIR}
   )

add_executable(${PROJECT_NAME} ${MY_SOURCE_FILES} ${DEPENDANCY_OBJECTS})
if(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
    find_library(COCOA_LIBRARY Cocoa)
    find_library(COREAUDIO_LIBRARY CoreAudio)
    set(LINKED_LIBRARIES ${LINKED_LIBRARIES} ${COCOA_LIBRARY} ${COREAUDIO_LIBRARY})
endif(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    set(LINKED_LIBRARIES ${LINKED_LIBRARIES} -lasound)
endif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")

target_link_libraries(${PROJECT_NAME} ${LINKED_LIBRARIES} Qt5::Widgets Qt5::Core Qt5::OpenGL Qt5::PrintSupport Qt5::Gui -lfftw3f Qwt::Qwt OpenGL::GLU OpenGL::GL Threads::Threads)
target_compile_options(${PROJECT_NAME} PUBLIC ${MY_CPP_FLAGS})
target_include_directories(${PROJECT_NAME} PUBLIC ${MY_INCLUDE_DIRECTORIES})

#Force use of -std=c++11 instead of -std=gnu++11
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_EXTENSIONS OFF)

#EOF
