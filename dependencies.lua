includes = {}

includes["GLFW"] = "%{wks.location}/dependencies/glad/include"
includes["GLAD"] = "%{wks.location}/dependencies/glfw/include"
includes["IMGUI"] = "%{wks.location}/dependencies/imgui" 

-- vendor
includes["GLM"] = "%{wks.location}/dependencies/vendor/glm/include"
includes["STBIMAGE"] = "%{wks.location}/dependencies/vendor/stb_image"
includes["SOL"] = "%{wks.location}/dependencies/vendor/sol"