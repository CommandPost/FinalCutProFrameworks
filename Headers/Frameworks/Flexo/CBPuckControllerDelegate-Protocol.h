//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FFCBPuckController;

@protocol CBPuckControllerDelegate

@optional
- (struct CGPoint)puck:(FFCBPuckController *)arg1 convertPuckToNormalizedCoord:(struct CGPoint)arg2;
- (struct CGPoint)puck:(FFCBPuckController *)arg1 convertNormalizedToPuckCoord:(struct CGPoint)arg2;
- (BOOL)puck:(FFCBPuckController *)arg1 willMoveTo:(struct CGPoint *)arg2;
@end

