/*
 * Automatically generated from type.cpp.in, do not edit this file directly
 * To regenerate execute typegen.sh
*/

/*
 * type.cpp: Generated code for the type system.
 *
 * Author:
 *   Rolf Bjarne Kvinge (RKvinge@novell.com)
 *
 * Copyright 2007 Novell, Inc. (http://www.novell.com)
 *
 * See the LICENSE file included with the distribution for details.
 * 
 */

#include <config.h>
#include <string.h>
#include <gtk/gtk.h>
#include <cairo.h>
#include <malloc.h>
#include <stdlib.h>
#include "runtime.h"

void types_init_manually ()
{
	// Put types that does not inherit from DependencyObject here (manually)

	//Type::RegisterType ("Invalid", Value::INVALID, Value::INVALID);
	Type::RegisterType ("bool", Value::BOOL);
	Type::RegisterType ("double", Value::DOUBLE);
	Type::RegisterType ("uint64", Value::UINT64);
	Type::RegisterType ("int", Value::INT32);
	Type::RegisterType ("string", Value::STRING);
	Type::RegisterType ("Color", Value::COLOR);
	Type::RegisterType ("Point", Value::POINT);
	Type::RegisterType ("Rect", Value::RECT);
	Type::RegisterType ("RepeatBehaviour", Value::REPEATBEHAVIOR);
	Type::RegisterType ("Duration", Value::DURATION);
	Type::RegisterType ("int64", Value::INT64);
	Type::RegisterType ("KeyTime", Value::KEYTIME);
	Type::RegisterType ("KeySpline", Value::KEYSPLINE);
	Type::RegisterType ("double*", Value::DOUBLE_ARRAY);
	Type::RegisterType ("Point*", Value::POINT_ARRAY);
	Type::RegisterType ("Matrix", Value::MATRIX);

#if DEBUG
	for (int i = 1; i < Value::LASTTYPE; i++) {
		if (Type::types [i] != NULL)
			continue;

		if (i > 0 && Type::types [i - 1] != NULL)
			printf ("Type %i is not initialized (previous type in enum is '%s')\n", i, Type::types [i - 1]->name);
		else
			printf ("Type %i is not initialized\n", i);
	}
#endif
}

//
// The generated code will be put at the end of the file
//
// We are currently generating:
//	- types_init (), initializes all types that inherit from DependencyObject


void types_init ()
{
	Type::RegisterType ("DependencyObject", Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("Animation", Value::ANIMATION, Value::TIMELINE);
	Type::RegisterType ("AnimationClock", Value::ANIMATIONCLOCK, Value::CLOCK);
	Type::RegisterType ("ArcSegment", Value::ARCSEGMENT, Value::PATHSEGMENT);
	Type::RegisterType ("BeginStoryboard", Value::BEGINSTORYBOARD, Value::TRIGGERACTION);
	Type::RegisterType ("BezierSegment", Value::BEZIERSEGMENT, Value::PATHSEGMENT);
	Type::RegisterType ("Brush", Value::BRUSH, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("Canvas", Value::CANVAS, Value::PANEL);
	Type::RegisterType ("Clock", Value::CLOCK, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("ClockGroup", Value::CLOCKGROUP, Value::CLOCK);
	Type::RegisterType ("Collection", Value::COLLECTION, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("ColorAnimation", Value::COLORANIMATION, Value::ANIMATION);
	Type::RegisterType ("ColorAnimationUsingKeyFrames", Value::COLORANIMATIONUSINGKEYFRAMES, Value::COLORANIMATION);
	Type::RegisterType ("ColorKeyFrame", Value::COLORKEYFRAME, Value::KEYFRAME);
	Type::RegisterType ("DiscreteColorKeyFrame", Value::DISCRETECOLORKEYFRAME, Value::COLORKEYFRAME);
	Type::RegisterType ("DiscreteDoubleKeyFrame", Value::DISCRETEDOUBLEKEYFRAME, Value::DOUBLEKEYFRAME);
	Type::RegisterType ("DiscretePointKeyFrame", Value::DISCRETEPOINTKEYFRAME, Value::POINTKEYFRAME);
	Type::RegisterType ("DoubleAnimation", Value::DOUBLEANIMATION, Value::ANIMATION);
	Type::RegisterType ("DoubleAnimationUsingKeyFrames", Value::DOUBLEANIMATIONUSINGKEYFRAMES, Value::DOUBLEANIMATION);
	Type::RegisterType ("DoubleKeyFrame", Value::DOUBLEKEYFRAME, Value::KEYFRAME);
	Type::RegisterType ("Downloader", Value::DOWNLOADER, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("Ellipse", Value::ELLIPSE, Value::SHAPE);
	Type::RegisterType ("EllipseGeometry", Value::ELLIPSEGEOMETRY, Value::GEOMETRY);
	Type::RegisterType ("EventTrigger", Value::EVENTTRIGGER, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("FrameworkElement", Value::FRAMEWORKELEMENT, Value::UIELEMENT);
	Type::RegisterType ("Geometry", Value::GEOMETRY, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("GeometryCollection", Value::GEOMETRY_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("GeometryGroup", Value::GEOMETRYGROUP, Value::GEOMETRY);
	Type::RegisterType ("Glyphs", Value::GLYPHS, Value::FRAMEWORKELEMENT);
	Type::RegisterType ("GradientBrush", Value::GRADIENTBRUSH, Value::BRUSH);
	Type::RegisterType ("GradientStop", Value::GRADIENTSTOP, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("GradientStopCollection", Value::GRADIENTSTOP_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("Image", Value::IMAGE, Value::MEDIABASE);
	Type::RegisterType ("ImageBrush", Value::IMAGEBRUSH, Value::TILEBRUSH);
	Type::RegisterType ("Inline", Value::INLINE, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("Inlines", Value::INLINES, Value::COLLECTION);
	Type::RegisterType ("KeyFrame", Value::KEYFRAME, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("KeyFrameCollection", Value::KEYFRAME_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("Line", Value::LINE, Value::SHAPE);
	Type::RegisterType ("LinearColorKeyFrame", Value::LINEARCOLORKEYFRAME, Value::COLORKEYFRAME);
	Type::RegisterType ("LinearDoubleKeyFrame", Value::LINEARDOUBLEKEYFRAME, Value::DOUBLEKEYFRAME);
	Type::RegisterType ("LinearGradientBrush", Value::LINEARGRADIENTBRUSH, Value::GRADIENTBRUSH);
	Type::RegisterType ("LinearPointKeyFrame", Value::LINEARPOINTKEYFRAME, Value::POINTKEYFRAME);
	Type::RegisterType ("LineGeometry", Value::LINEGEOMETRY, Value::GEOMETRY);
	Type::RegisterType ("LineSegment", Value::LINESEGMENT, Value::PATHSEGMENT);
	Type::RegisterType ("MatrixTransform", Value::MATRIXTRANSFORM, Value::TRANSFORM);
	Type::RegisterType ("MediaAttribute", Value::MEDIAATTRIBUTE, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("MediaAttributeCollection", Value::MEDIAATTRIBUTE_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("MediaBase", Value::MEDIABASE, Value::FRAMEWORKELEMENT);
	Type::RegisterType ("MediaElement", Value::MEDIAELEMENT, Value::MEDIABASE);
	Type::RegisterType ("NameScope", Value::NAMESCOPE, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("Panel", Value::PANEL, Value::FRAMEWORKELEMENT);
	Type::RegisterType ("ParallelTimeline", Value::PARALLELTIMELINE, Value::TIMELINEGROUP);
	Type::RegisterType ("Path", Value::PATH, Value::SHAPE);
	Type::RegisterType ("PathFigure", Value::PATHFIGURE, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("PathFigureCollection", Value::PATHFIGURE_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("PathGeometry", Value::PATHGEOMETRY, Value::GEOMETRY);
	Type::RegisterType ("PathSegment", Value::PATHSEGMENT, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("PathSegmentCollection", Value::PATHSEGMENT_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("PointAnimation", Value::POINTANIMATION, Value::ANIMATION);
	Type::RegisterType ("PointAnimationUsingKeyFrames", Value::POINTANIMATIONUSINGKEYFRAMES, Value::POINTANIMATION);
	Type::RegisterType ("PointKeyFrame", Value::POINTKEYFRAME, Value::KEYFRAME);
	Type::RegisterType ("PolyBezierSegment", Value::POLYBEZIERSEGMENT, Value::PATHSEGMENT);
	Type::RegisterType ("Polygon", Value::POLYGON, Value::SHAPE);
	Type::RegisterType ("Polyline", Value::POLYLINE, Value::SHAPE);
	Type::RegisterType ("PolyLineSegment", Value::POLYLINESEGMENT, Value::PATHSEGMENT);
	Type::RegisterType ("PolyQuadraticBezierSegment", Value::POLYQUADRATICBEZIERSEGMENT, Value::PATHSEGMENT);
	Type::RegisterType ("QuadraticBezierSegment", Value::QUADRATICBEZIERSEGMENT, Value::PATHSEGMENT);
	Type::RegisterType ("RadialGradientBrush", Value::RADIALGRADIENTBRUSH, Value::GRADIENTBRUSH);
	Type::RegisterType ("Rectangle", Value::RECTANGLE, Value::SHAPE);
	Type::RegisterType ("RectangleGeometry", Value::RECTANGLEGEOMETRY, Value::GEOMETRY);
	Type::RegisterType ("ResourceCollection", Value::RESOURCE_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("RotateTransform", Value::ROTATETRANSFORM, Value::TRANSFORM);
	Type::RegisterType ("ScaleTransform", Value::SCALETRANSFORM, Value::TRANSFORM);
	Type::RegisterType ("Shape", Value::SHAPE, Value::FRAMEWORKELEMENT);
	Type::RegisterType ("SkewTransform", Value::SKEWTRANSFORM, Value::TRANSFORM);
	Type::RegisterType ("SolidColorBrush", Value::SOLIDCOLORBRUSH, Value::BRUSH);
	Type::RegisterType ("SplineDoubleKeyFrame", Value::SPLINEDOUBLEKEYFRAME, Value::DOUBLEKEYFRAME);
	Type::RegisterType ("Storyboard", Value::STORYBOARD, Value::PARALLELTIMELINE);
	Type::RegisterType ("StrokeCollection", Value::STROKE_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("StylusPointCollection", Value::STYLUSPOINT_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("TextBlock", Value::TEXTBLOCK, Value::FRAMEWORKELEMENT);
	Type::RegisterType ("TileBrush", Value::TILEBRUSH, Value::BRUSH);
	Type::RegisterType ("Timeline", Value::TIMELINE, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("TimelineCollection", Value::TIMELINE_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("TimelineGroup", Value::TIMELINEGROUP, Value::TIMELINE);
	Type::RegisterType ("TimelineMarkerCollection", Value::TIMELINEMARKER_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("Transform", Value::TRANSFORM, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("TransformCollection", Value::TRANSFORM_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("TransformGroup", Value::TRANSFORMGROUP, Value::TRANSFORM);
	Type::RegisterType ("TranslateTransform", Value::TRANSLATETRANSFORM, Value::TRANSFORM);
	Type::RegisterType ("TriggerAction", Value::TRIGGERACTION, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("TriggerActionCollection", Value::TRIGGERACTION_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("TriggerCollection", Value::TRIGGER_COLLECTION, Value::COLLECTION);
	Type::RegisterType ("UIElement", Value::UIELEMENT, Value::VISUAL);
	Type::RegisterType ("UnmanagedDownloader", Value::UNMANAGEDDOWNLOADER, Value::DOWNLOADER);
	Type::RegisterType ("VideoBrush", Value::VIDEOBRUSH, Value::TILEBRUSH);
	Type::RegisterType ("Visual", Value::VISUAL, Value::DEPENDENCY_OBJECT);
	Type::RegisterType ("VisualCollection", Value::VISUAL_COLLECTION, Value::COLLECTION);
	types_init_manually ();
}
