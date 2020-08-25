//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxVersioningAPI.h"
#import "PROAPIObject.h"

@class NSString;

@interface OZFxPlugVersioningAPI : NSObject <FxVersioningAPI, PROAPIObject>
{
    // Error parsing type: ^{OZFxPlugSharedBase=^^?@@@^v@@@@@@@@@@@@@@@{PCString=^{__CFString}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}BB{atomic<bool>=AB}BBBiBBBBB^{OZChannelBase}BA@BBQBQ{PCMutex=^^?{_opaque_pthread_mutex_t=q[56c]}}I}, name: _plugin
}

- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (BOOL)updateVersionAtCreation:(unsigned int)arg1;
- (unsigned int)versionAtCreation;
-     // Error parsing type: @24@0:8^{OZFxPlugSharedBase=^^?@@@^v@@@@@@@@@@@@@@@{PCString=^{__CFString}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}BB{atomic<bool>=AB}BBBiBBBBB^{OZChannelBase}BA@BBQBQ{PCMutex=^^?{_opaque_pthread_mutex_t=q[56c]}}I}16, name: initWithPlugin:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

