#ifndef PARSEGL_H
#define PARSEGL_H

#include "Global.h"

//----------------------------------------------------------------------------
// CmdlineGL Functions
//
PUBLISHED(cglUseFixedPt, DoSetFixedPoint);
PUBLISHED(cglLoadImage2D, DoLoadImage2D);

//----------------------------------------------------------------------------
// Setup Functions
//
PUBLISHED(glMatrixMode, DoMatrixMode);
PUBLISHED(glEnable, DoEnable);
PUBLISHED(glDisable, DoDisable);
PUBLISHED(glHint, DoHint);
PUBLISHED(glClear, DoClear);
PUBLISHED(glClearColor, DoClearColor);
PUBLISHED(glClearDepth, DoClearDepth);
PUBLISHED(glBegin, DoBegin);
PUBLISHED(glEnd, DoEnd);
PUBLISHED(glFlush, DoFlush);

//----------------------------------------------------------------------------
// Vertex Functions
//
PUBLISHED(glVertex, DoVertex);
PUBLISHED(glNormal, DoNormal);

//----------------------------------------------------------------------------
// Color Functions
//
PUBLISHED(glColor, DoColor);
PUBLISHED(glFog, DoFog);

//----------------------------------------------------------------------------
// Lighting Functions
//
PUBLISHED(glLight, DoLight);
PUBLISHED(glLightModel, DoLightModel);
PUBLISHED(glShadeModel, DoShadeModel);
PUBLISHED(glMaterial, DoMaterial);
PUBLISHED(glColorMaterial, DoColorMaterial);

//----------------------------------------------------------------------------
// Texture Functions
//
PUBLISHED(glBindTexture, DoBindTexture);
PUBLISHED(glTexParameter, DoTexParameter);
PUBLISHED(glTexCoord, DoTexCoord);

//----------------------------------------------------------------------------
// Modelview Matrix Functions
//
PUBLISHED(glLoadIdentity, DoLoadIdentity);
PUBLISHED(glPushMatrix, DoPushMatrix);
PUBLISHED(glPopMatrix, DoPopMatrix);
PUBLISHED(glScale, DoScale);
PUBLISHED(glTranslate, DoTranslate);
PUBLISHED(glRotate, DoRotate);

//----------------------------------------------------------------------------
// Projectionview Matrix Functions
//
PUBLISHED(glViewport, DoViewport);
PUBLISHED(glOrtho, DoOrtho);
PUBLISHED(glFrustum, DoFrustum);

//----------------------------------------------------------------------------
// Display List Functions
//
PUBLISHED(glNewList, DoNewList);
PUBLISHED(glEndList, DoEndList);
PUBLISHED(glCallList, DoCallList);

//----------------------------------------------------------------------------
// glu Functions
//
PUBLISHED(gluLookAt, DoLookAt);
PUBLISHED(gluNewQuadric, DoNewQuadric);
PUBLISHED(gluQuadricDrawStyle, DoQuadricDrawStyle);
PUBLISHED(gluQuadricNormals, DoQuadricNormals);
PUBLISHED(gluQuadricOrientation, DoQuadricOrientation);
PUBLISHED(gluQuadricTexture, DoQuadricTexture);
PUBLISHED(gluCylinder, DoCylinder);
PUBLISHED(gluSphere, DoSphere);
PUBLISHED(gluDisk, DoDisk);
PUBLISHED(gluPartialDisk, DoPartialDisk);

//----------------------------------------------------------------------------
// Glut Functions
//
PUBLISHED(glutIgnoreKeyRepeat, DoIgnoreKeyRepeat);
PUBLISHED(glutSwapBuffers, DoSwapBuffers);

#endif
