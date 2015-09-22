//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

    //===================================================================================================================
 
    glGenFramebuffers( 1, &radial_OCC_01_FBO);
    
    glGenTextures(1, &radial_OCC_01_TEXTURE);
    glBindTexture(GL_TEXTURE_2D, radial_OCC_01_TEXTURE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)viewWidth/scale_radial_OCC_FBO, (GLsizei)viewHeight/scale_radial_OCC_FBO, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    //---------------------------------------------------------------
    #ifdef __APPLE__
        //glGenerateMipmap(GL_TEXTURE_2D);
    #endif    
    #ifdef WIN32
        //glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP_SGIS, GL_TRUE );
    #endif     
    //---------------------------------------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, radial_OCC_01_FBO);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, radial_OCC_01_TEXTURE, 0);

    //===================================================================================================================
   

    glGenFramebuffers( 1, &radial_OCC_02_FBO);
    
    glGenTextures(1, &radial_OCC_02_TEXTURE);
    glBindTexture(GL_TEXTURE_2D, radial_OCC_02_TEXTURE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)viewWidth/scale_radial_OCC_FBO, (GLsizei)viewHeight/scale_radial_OCC_FBO, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    //---------------------------------------------------------------
    #ifdef __APPLE__
        //glGenerateMipmap(GL_TEXTURE_2D);
    #endif    
    #ifdef WIN32
        //glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP_SGIS, GL_TRUE );
    #endif     
    //---------------------------------------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, radial_OCC_02_FBO);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, radial_OCC_02_TEXTURE, 0); 
    //===================================================================================================================
    glGenFramebuffers( 1, &radial_OCC_03_FBO);
    
    glGenTextures(1, &radial_OCC_03_TEXTURE);
    glBindTexture(GL_TEXTURE_2D, radial_OCC_03_TEXTURE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)viewWidth/scale_radial_OCC_FBO, (GLsizei)viewHeight/scale_radial_OCC_FBO, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    //---------------------------------------------------------------
    #ifdef __APPLE__
        //glGenerateMipmap(GL_TEXTURE_2D);
    #endif    
    #ifdef WIN32
        //glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP_SGIS, GL_TRUE );
    #endif     
    //---------------------------------------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, radial_OCC_03_FBO);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, radial_OCC_03_TEXTURE, 0); 
    //===================================================================================================================
    glGenFramebuffers( 1, &radial_OCC_04_FBO);
    
    glGenTextures(1, &radial_OCC_04_TEXTURE);
    glBindTexture(GL_TEXTURE_2D, radial_OCC_04_TEXTURE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)viewWidth/scale_radial_OCC_FBO, (GLsizei)viewHeight/scale_radial_OCC_FBO, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    //---------------------------------------------------------------
    #ifdef __APPLE__
        //glGenerateMipmap(GL_TEXTURE_2D);
    #endif    
    #ifdef WIN32
        //glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP_SGIS, GL_TRUE );
    #endif     
    //---------------------------------------------------------------
    glBindFramebuffer(GL_FRAMEBUFFER, radial_OCC_04_FBO);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, radial_OCC_04_TEXTURE, 0); 
    //===================================================================================================================
    
    
