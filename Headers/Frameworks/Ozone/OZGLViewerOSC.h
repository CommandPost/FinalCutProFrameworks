//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZGLViewerBase.h>

#import "NSTextInput.h"

@class NSMenu, NSMutableArray, NSProCursor, NSTrackingArea, OZViewerSnaps, POOnScreenControl;

@interface OZGLViewerOSC : OZGLViewerBase <NSTextInput>
{
    NSMutableArray *_pOverlays;
    NSMutableArray *_pOnScreenControls;
    POOnScreenControl *_pHitControl;
    int _hitActivePart;
    OZViewerSnaps *_pSnaps;
    NSProCursor *_pOSCCursor;
    BOOL _isMouseDown;
    BOOL _handlingControlLeftMouseAsRightMouse;
    BOOL _isRotoOSCActive;
    BOOL _isCameraToolsHit;
    BOOL _isCameraHotKeysDown;
    NSMenu *_nonObjectContextMenu;
    NSMenu *_objectContextMenu;
    NSMenu *_objectBlendContextMenu;
    NSMenu *_behaviorsContextMenu;
    NSMenu *_filtersContextMenu;
    NSMenu *_masksContextMenu;
    double _dropRectCenterX;
    double _dropRectCenterY;
    double _dropRectWidth;
    double _dropRectHeight;
    _Bool _dropIntoScene;
    _Bool _dropIntoExpose;
    _Bool _dropCanReplace;
    struct OZElement *_pDropTargetNode;
    BOOL _cursorIsHiddenAndDetached;
    NSTrackingArea *_trackingArea;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)removeOSCs;
- (void)awakeFromNib;
- (void)createOverlays;
- (BOOL)isOpaque;
- (id)rulers;
- (struct CGRect)availableBounds;
- (id)onScreenControls;
- (id)overlays;
- (BOOL)isMouseDown;
- (void)clearIsMouseDown;
- (id)hitControl;
- (struct CGSize)minSize;
- (_Bool)isCameraMoving;
- (void)drawOnScreenControls;
- (void)drawOnScreenControls:(BOOL)arg1;
- (void)drawTool;
- (void)drawDragAndDrop;
- (void)resetCursorRects;
- (void)setCursorForOSC:(id)arg1 event:(id)arg2;
- (void)setCursor:(id)arg1;
- (void)clearOSCCursor;
- (void)checkStates;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (int)hitCheck:(id)arg1;
- (void)mouseExited:(id)arg1;
- (_Bool)handlesDoubleClicks;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (BOOL)customKeyEquivalent:(id)arg1;
- (void)initSelectionInOSC:(id)arg1;
- (void)clearSelectionInOSC;
- (BOOL)updateSelectionInOSC:(id)arg1 withRect:(PCRect_b601f9f3 *)arg2;
- (void)doResignKeyWindow;
- (void)cycleOSCsForward:(id)arg1;
- (void)cycleOSCsBackward:(id)arg1;
- (BOOL)performSelectorOnControls:(SEL)arg1 withObject:(id)arg2;
- (void)toggleToolTranslate:(id)arg1;
- (void)toggleToolRotate:(id)arg1;
- (void)toggleToolScale:(id)arg1;
- (void)nudgeUp:(id)arg1;
- (void)nudgeDown:(id)arg1;
- (void)nudgeLeft:(id)arg1;
- (void)nudgeRight:(id)arg1;
- (void)nudgeUpBig:(id)arg1;
- (void)nudgeDownBig:(id)arg1;
- (void)nudgeLeftBig:(id)arg1;
- (void)nudgeRightBig:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)fillInBlendMenu;
- (void)fillInBehaviorsFiltersAndMasksMenus;
- (void)addOnScreenControlMenuItems:(id)arg1;
- (BOOL)_allowsContextMenus;
- (id)menuForEvent:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)didActivate;
- (void)willDeactivate;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)performSelectorOnControlsOrFirstResponder:(SEL)arg1 withObject:(id)arg2;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)delete:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)controlMenuAction:(id)arg1;
- (void)selectMaskByNumber:(id)arg1;
- (void)selectObjectByNumber:(id)arg1;
- (id)getCurrentTool;
- (void)setCurrentToolID:(const struct PCUUID *)arg1 withChannel:(struct OZChannelBase *)arg2;
- (void)setCurrentToolID:(const struct PCUUID *)arg1 withChannel:(struct OZChannelBase *)arg2 notify:(BOOL)arg3;
- (void)setCurrentTool:(id)arg1 withChannel:(struct OZChannelBase *)arg2 notify:(BOOL)arg3;
- (void)setLastTool:(id)arg1;
- (id)getLastTool;
- (void)setCurrentOSCClass:(const struct PCUUID *)arg1;
- (struct PCUUID *)getCurrentOSCClass;
- (void)quickSwitchToToolID:(const struct PCUUID *)arg1;
- (void)undoQuickSwitchToTool;
- (BOOL)quickSwitchToolEvent:(id)arg1;
- (id)checkOnScreenControl:(struct OZOnScreenControlComponent *)arg1 andAdd:(BOOL)arg2 to:(struct OZSceneNode *)arg3;
- (BOOL)checkEffectAndBehaviorOnScreenControls:(struct OZSceneNode *)arg1 andAdd:(BOOL)arg2;
- (void)updateOnScreenControls;
- (void)onScreenControlsSelectionChanged;
- (BOOL)showOSCsForNode:(struct OZSceneNode *)arg1 includeIsolatedNode:(BOOL)arg2;
- (BOOL)acceptPassiveOSCEvent:(id)arg1;
- (void)passMouseDownAndObjectToToolWithEvent:(id)arg1;
- (void)incProxyRend;
- (void)commonOnScreenControls:(list_eaef8569 *)arg1;
- (int)getOSCState;
- (void)setOSCState:(int)arg1;
- (void)setOverlayOption:(int)arg1 to:(BOOL)arg2;
- (int)oscMode;
- (void)removeOverlay:(id)arg1;
- (void)addOverlayWithPriority:(id)arg1;
- (id)snaps;
- (void)toggleSnapping:(id)arg1;
- (void)postNotification:(unsigned int)arg1 updateToolOnSelectionChanged:(BOOL)arg2;
- (void)notify:(unsigned int)arg1;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)unmarkText;
- (BOOL)hasMarkedText;
- (long long)conversationIdentifier;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (id)validAttributesForMarkedText;
- (void)positionAtCenter;
- (void)fitInWindow;
- (void)updateDropRectSize:(id)arg1;
- (void)createDropInfo:(struct OZDropTargetInfo *)arg1 sender:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)updateToolbarState;
- (_Bool)isExposeEnabled;
- (id)getExposeOverlay;
- (id)createExposeOverlay:(struct PCUUID)arg1;
- (void)enableExposeAllLayers;
- (void)enableExposeLayers;
- (void)enableExposeAllObjects;
- (void)enableExposeObjects;
- (void)enableExposeForDrop:(void *)arg1 dropInfo:(struct OZDropTargetInfo *)arg2;
- (void)disableExpose;
- (void)enableExpose3D;
- (_Bool)areDropZonesEnabled;
- (id)getDropZonesOverlay;
- (id)createDropZonesOverlay:(struct PCUUID)arg1;
- (void)enableDropZones:(void *)arg1 dropInfo:(struct OZDropTargetInfo *)arg2;
- (void)disableDropZones;
- (void)dragOntoDropZones:(_Bool)arg1;
- (BOOL)isRotoOSCActive;
- (id)getObjectHighlightOverlay;
- (id)createObjectHighlightOverlay:(struct PCUUID)arg1;
- (void)enableObjectHighlight;
- (void)disableObjectHighlight;
- (void)hideAndDetachCursor;
- (void)showAndReattachCursor;
- (void)orbit:(const PCVector3_457fd1f0 *)arg1;
- (void)orbit:(const PCVector3_457fd1f0 *)arg1 withState:(const struct OZRenderState *)arg2;
- (struct OZScene *)getScene;
- (const struct OZRenderState *)getRenderState;
- (void)setIgnoreTransformationsForElement:(struct OZSceneNode *)arg1;
- (BOOL)canEnableTransformPoints;
- (void)transformPointsWithTime:(CDStruct_1b6d18a9 *)arg1;
- (void)thinKeyframes;

@end

