cmake_minimum_required(VERSION 3.26)
project(historial)

set(CMAKE_CXX_STANDARD 20)

add_executable(historial
        main.cpp
        "venta/ventas mascots.cpp"
        Arreglos.cpp
)

add_executable(apolo
        mascotasss/apolo.cpp
        tarea_semana2_variables/tareauno.cpp
        tarea_semana2_variables/series.cpp
        tarea_semana2_variables/peso.cpp
        tarea_semana2_variables/triangulo.cpp
        tarea_semana2_variables/precio.cpp
        tarea_semana2_variables/double.cpp
        tarea_semana2_variables/letra.cpp
        tarea_semana2_variables/cadenaletra.cpp
        tarea_semana2_variables/bool.cpp
        tarea_semana2_variables/boolcompleto.cpp
        tarea_semana2_variables/string.cpp
        tarea_semana2_variables/apellido.cpp
        tarea_semana2_variables/ejerciciointegrador.cpp
        tarea_semana2_variables/parcial-uno/parcial.cpp
        paricial_uno/parcial_uno.cpp
        tarea_semana_3/practica_tarea3.cpp
        "tarea4_puertas_logicas/puertas logicas.cpp"
        semana5_ciclo_while_for/tarea_semana_5_for_while.cpp
        semana5_ciclo_while_for/ejericicio_2.cpp
        "../../AppData/Roaming/JetBrains/CLion2025.3/extensions/com.intellij.database/schema.layouts/hoja de trabajo 4/hoja_de_trabajo_4.cpp"
        "../../AppData/Roaming/JetBrains/CLion2025.3/extensions/com.intellij.database/schema.layouts/hoja de trabajo 4/l.cpp"
        "../../AppData/Roaming/JetBrains/CLion2025.3/extensions/com.intellij.database/schema.layouts/hoja de trabajo 4/l.h"
        "hoja 4 de trabajo/hoja4.cpp"
        tarea7_switch/semana7_switch.cpp
        "tarea semana8/tarea_semana_8.cpp"
        "tarea seamana 9/tarea_seamana_9.cpp"
        "tarea semana 12/tarea_semana_12.cpp"
)