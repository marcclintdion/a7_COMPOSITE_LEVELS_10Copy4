
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



    radial_occlusion_SHADER = glCreateProgram();
    //----------------------------------------------------
    const GLchar *vertexSource_radial_occlusion =                                                                                    

    " #define highp                                                                                                                             \n"
    
    //--------------------------------------------     
    "    attribute        vec4   position;                                                                                                       \n"
    //--------------------------------------------
   "    uniform   highp   vec2  adjustShadowPos;                                                                                \n"
    
    "    uniform   highp   vec2  offset1;                                                                                \n"
    "    uniform   highp   vec2  offset2;                                                                                \n"
    "    uniform   highp   vec2  offset3;                                                                                \n"
    "    uniform   highp   vec2  offset4;                                                                                \n"


    "    varying   highp   vec2  vTexCoord;                                                                                     \n"

    "    varying   highp   vec2  TexCoord1;                                                                                     \n"
    "    varying   highp   vec2  TexCoord2;                                                                                     \n"
    "    varying   highp   vec2  TexCoord3;                                                                                     \n"
    "    varying   highp   vec2  TexCoord4;                                                                                     \n"
 
  

    //==================================================================================================================================
    
    " void main()                                                                                                               \n" 
    " {                                                                                                                         \n" 

        "   highp vec2 Pos;                                                                                                     \n"
        "   Pos                     =  sign(position.xy);                                                                       \n"
        "   gl_Position             =  highp vec4(Pos.x, Pos.y, 0.0, 1.0);                                                      \n"
        "   vTexCoord               =  Pos * 0.5 + 0.5;                                                                         \n"
        
        "   vTexCoord.xy           +=  adjustShadowPos;                                                                         \n"

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
     
        "     TexCoord1 = vTexCoord + offset1 * 0.0005;                                                                         \n"
      
        "     TexCoord2 = vTexCoord + offset2 * 0.0005;                                                                         \n"
       
        "     TexCoord3 = vTexCoord + offset3 * 0.0005;                                                                         \n"

        "     TexCoord4 = vTexCoord + offset4 * 0.0005;                                                                         \n"

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    " } \n";
    
    //===================================================================================================================================                 

    const GLchar *fragmentSource_radial_occlusion =                                                                                  

    "#ifdef GL_ES                                                                                                                                \n" 
    "#else                                                                                                                                       \n" 
    "#define highp                                                                                                                               \n" 
    "#endif                                                                                                                                      \n" 
    
    
    //--------------------------------------------
    "    uniform   highp sampler2D DEPTH_TEX;                                                                                                    \n"    
    "    uniform   highp sampler2D NORMAL_TEX;                                                                                                   \n"
    //--------------------------------------------
    "    varying   highp   vec2    vTexCoord;                                                                                                    \n"
    
    "    varying   highp   vec2    TexCoord1;                                                                                                    \n"
    "    varying   highp   vec2    TexCoord2;                                                                                                    \n"
    "    varying   highp   vec2    TexCoord3;                                                                                                    \n"
    "    varying   highp   vec2    TexCoord4;                                                                                                    \n"
   
    //--------------------------------------------
    "              highp   vec4    highp vec4 originalPixel;                                                                                     \n"

    //=======================================================================================================================

   
    "void main()                                                                                                                                 \n"
    "{                                                                                                                                           \n"



"    originalPixel      =  texture2D(NORMAL_TEX, vTexCoord);                                                                                     \n"
//----------------------------------------------------------------

"    highp float shadow    =  texture2D(NORMAL_TEX, TexCoord1) * 0.25;                                                                         \n"
"    shadow               +=  texture2D(NORMAL_TEX, TexCoord2) * 0.25;                                                                         \n"
"    shadow               +=  texture2D(NORMAL_TEX, TexCoord3) * 0.25;                                                                         \n"
"    shadow               +=  texture2D(NORMAL_TEX, TexCoord4) * 0.25;                                                                         \n"




    "    gl_FragColor             =  highp vec4(originalPixel.xyz,  1.0);                                                                             \n"
 
    "}\n";

    
        
        
        
    //=======================================================================================================================                   

        radial_occlusion_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);                                                          
        glShaderSource( radial_occlusion_SHADER_VERTEX, 1, &vertexSource_radial_occlusion, NULL );                                        
        glCompileShader( radial_occlusion_SHADER_VERTEX);                                              //glShaderBinary                              
        //----------------------------------------------------                                                                  
        radial_occlusion_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);                                                      
        glShaderSource( radial_occlusion_SHADER_FRAGMENT, 1, &fragmentSource_radial_occlusion, NULL );                                    
        glCompileShader(radial_occlusion_SHADER_FRAGMENT);                                              //glShaderBinary                                                                             
        //--------------------------------------------------------------------------------------------------                    
        glAttachShader( radial_occlusion_SHADER, radial_occlusion_SHADER_VERTEX );                                                        
        glAttachShader( radial_occlusion_SHADER, radial_occlusion_SHADER_FRAGMENT );                                                      
        //--------------------------------------------------------------------------------------------------                    
        glBindAttribLocation(radial_occlusion_SHADER,   0, "position");                                                              
        glBindAttribLocation(radial_occlusion_SHADER,   1, "normal");                                                            
        glBindAttribLocation(radial_occlusion_SHADER,   2, "textureCoords");                                                             
        //--------------------------------------------------------------------------------------------------                    
        glDeleteShader( radial_occlusion_SHADER_VERTEX);                                                                             
        glDeleteShader( radial_occlusion_SHADER_FRAGMENT);                                                                           
        glLinkProgram(radial_occlusion_SHADER);                                                                                      
        //--------------------------------------------------------------------------------------------------                    


    UNIFORM_adjustShadowPos_radial_occlusion             = glGetUniformLocation(radial_occlusion_SHADER, "adjustShadowPos");//used to hide halo

    UNIFORM_OFFSET_1_radial_occlusion                    = glGetUniformLocation(radial_occlusion_SHADER, "offset1");
    UNIFORM_OFFSET_2_radial_occlusion                    = glGetUniformLocation(radial_occlusion_SHADER, "offset2");
    UNIFORM_OFFSET_3_radial_occlusion                    = glGetUniformLocation(radial_occlusion_SHADER, "offset3");
    UNIFORM_OFFSET_4_radial_occlusion                    = glGetUniformLocation(radial_occlusion_SHADER, "offset4");


    UNIFORM_TEXTURE_radial_occlusion_DEPTH               = glGetUniformLocation(radial_occlusion_SHADER, "DEPTH_TEX");  
    UNIFORM_TEXTURE_radial_occlusion_NORMALS             = glGetUniformLocation(radial_occlusion_SHADER, "NORMAL_TEX");  





