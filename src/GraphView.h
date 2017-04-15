#pragma once

#include <stdint.h>

struct sync_track;
struct TrackViewInfo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct GraphSettings
{
	uint32_t borderColor; 
	uint32_t curveColor;
	int singleTrack;
} GraphSettings;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct Rect
{
	int x;
	int y;
	int width;
	int height;
} Rect;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct GraphView
{
	struct sync_track* activeTrack;
	int startRow;
	int endRow;
} GraphView;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void GraphView_render(const GraphView* graphView, const GraphSettings* settings, const Rect* rect);

