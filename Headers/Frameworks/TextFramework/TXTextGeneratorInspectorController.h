//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextFramework/OZTextInspectorController.h>

@class LKButtonCell, OZAutoTextGeneratorController;

@interface TXTextGeneratorInspectorController : OZTextInspectorController
{
    OZAutoTextGeneratorController *_pGeneratorController;
    LKButtonCell *_generatorButtonCell;
}

- (id)initWithSceneNodes:(list_699e9227 *)arg1 viewCtlrDelegate:(id)arg2;
- (void)dealloc;
- (void)switchPane:(id)arg1;
- (id)createGeneratorControllerWithSceneNode:(struct OZSceneNode *)arg1;

@end

