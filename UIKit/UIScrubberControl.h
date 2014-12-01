/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UIOldSliderControl.h"
#import <Availability2.h>

@class UIView;

@interface UIScrubberControl : UIOldSliderControl {
	id _sliderAvailableFill;
	double _duration;
	float _lastDisplayedWidth;
	float _maxTrackWidth;
	UIView* _elapsedTimeView;
	UIView* _remainingTimeView;
	id _delegate;
	double _trackingStartTime;
	CGPoint _lastUpdatedPoint;
	float _valueAvailable;
	unsigned _didDrag : 1;
	unsigned _sentScrubbingStart : 1;
	unsigned _autoSizesToFitDuration : 1;
	unsigned _layoutTimeParts : 2;
	unsigned _remainingIsDuration : 1;
	unsigned _delegateDidEnterScrubbingState : 1;
	unsigned _delegateDidChangeScrubValue : 1;
	unsigned _delegateShouldBeginScrubbing : 1;
	unsigned _endingTracking : 1;
	unsigned _showKnob : 1;
	unsigned _largeKnob : 1;
	unsigned _rightCapIsDownloadCap : 1;
	unsigned _requireMomentaryDelay : 1;
	unsigned _showFullWidthComponents : 1;
	unsigned _alwaysShowAllComponentsForDuration : 1;
	unsigned _timeLayoutDisabledCount : 7;
	unsigned _timeLayoutSkippedLayout : 1;
	unsigned _timeLayoutSkippedForcedLayout : 1;
	unsigned _showTimeCentered : 1;
	unsigned _leftCapIsDownloadCap : 1;
	unsigned _allowsAnyValue : 1;
	unsigned _unused : 3;
}
+(BOOL)allowLayeredFillForKnob;
-(id)initWithFrame:(CGRect)frame maxTrackWidth:(float)width showTimes:(BOOL)times knobStyle:(int)style;
-(id)initWithFrame:(CGRect)frame maxTrackWidth:(float)width showTimes:(BOOL)times showKnob:(BOOL)knob;
// inherited: -(id)createSliderKnobView;
-(void)setPinTimeToOutsideEdges:(BOOL)outsideEdges;
-(void)setShowTimeCenteredInAvailableArea:(BOOL)availableArea;
// inherited: -(CGRect)sliderBounds;
// inherited: -(id)imageForSliderPiece:(int)sliderPiece;
-(const XXStruct_NwkmQC*)metrics;
-(void)_resetTimeFrames;
// inherited: -(void)dealloc;
-(void)setDelegate:(id)delegate;
-(float)scrubValue;
-(void)sizeToFit;
-(void)setDuration:(double)duration;
-(double)duration;
-(double)requiredAutoUpdateDurationForDuration:(double)duration;
// inherited: -(id)hitTest:(CGPoint)test withEvent:(id)event;
-(BOOL)pointInsideKnob:(CGPoint)knob forEvent:(GSEventRef)event;
-(BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(BOOL)pointInsideKnob:(CGPoint)knob withEvent:(id)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(CGRect)hitRect;
-(CGRect)_rectOfTrack;
// inherited: -(CGRect)fillBounds;
-(BOOL)_notAllValueAvailable;
-(void)setAllowsAnyValue:(BOOL)value;
// inherited: -(void)drawSliderPiece:(int)piece inRect:(CGRect)rect;
-(void)_updateAvailableFill;
// inherited: -(void)_setValue:(float)value andSendAction:(BOOL)action;
// inherited: -(void)setValue:(float)value animated:(BOOL)animated animationCurve:(int)curve;
-(void)_updateTimes:(BOOL)times;
-(void)disableTimesLayout;
-(void)enableTimesLayout;
-(void)setShowFullWidthComponents:(BOOL)components;
-(void)setShowDuration:(BOOL)duration;
-(void)setScrubbingRequiresMomentaryDelay:(BOOL)delay;
-(void)_sendDelegateDidEnterScrubbingState:(BOOL)_sendDelegate;
// inherited: -(BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;
// inherited: -(BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;
// inherited: -(void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;
// inherited: -(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
// inherited: -(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
// inherited: -(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)setValueAvailable:(float)available;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)setTimeColor:(id)color;
-(void)setTimeShadowColor:(id)color;
#endif
@end

