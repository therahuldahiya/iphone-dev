/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class DeliveryAccount, MailAccount, Message, MutableMessageHeaders, NSArray, NSString, PlainTextDocument;

@interface MailDelivery : NSObject
{
    id _delegate;
    Message *_message;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    MutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    NSString *_htmlString;
    PlainTextDocument *_plainTextAlternative;
    NSArray *_otherStringsAndAttachments;
    unsigned int _askForReadReceipt:1;
    unsigned int _threaded:1;
    unsigned int _status:4;
    unsigned int __UNUSED__:25;
}

+ (BOOL)deliverMessage:(id)fp8;	// IMP=0x30b8a8dd
+ (BOOL)deliverMessage:(id)fp8 askForReadReceipt:(BOOL)fp12;	// IMP=0x30b8a881
+ (id)newWithHeaders:(id)fp8 HTML:(id)fp12 plainTextAlternative:(id)fp16 other:(id)fp20;	// IMP=0x30b8a821
+ (id)newWithHeaders:(id)fp8 mixedContent:(id)fp12 textPartsAreHTML:(BOOL)fp16;	// IMP=0x30b8a7b5
+ (id)newWithMessage:(id)fp8;	// IMP=0x30b8a6d1
- (id)account;	// IMP=0x30b8ac91
- (id)archiveAccount;	// IMP=0x30b8ac5d
- (BOOL)askForReadReceipt;	// IMP=0x30b8acc5
- (void)dealloc;	// IMP=0x30b8aa19
- (id)delegate;	// IMP=0x30b8ac55
- (void)deliverAsynchronously;	// IMP=0x30b8ae99
- (int)deliverMessageData:(id)fp8 toRecipients:(id)fp12;	// IMP=0x30b8b2e1
- (int)deliverSynchronously;	// IMP=0x30b8af91
- (int)deliveryStatus;	// IMP=0x30b8ace7
- (id)headersForDelivery;	// IMP=0x30b8ad11
- (id)initWithHeaders:(id)fp8 HTML:(id)fp12 plainTextAlternative:(id)fp16 other:(id)fp20;	// IMP=0x30b8a9ad
- (id)initWithHeaders:(id)fp8 mixedContent:(id)fp12 textPartsAreHTML:(BOOL)fp16;	// IMP=0x30b8a949
- (id)initWithMessage:(id)fp8;	// IMP=0x30b8a8f5
- (id)message;	// IMP=0x30b8aaf1
- (id)originalHeaders;	// IMP=0x30b8acf1
- (void)setAccount:(id)fp8;	// IMP=0x30b8ac95
- (void)setArchiveAccount:(id)fp8;	// IMP=0x30b8ac61
- (void)setAskForReadReceipt:(BOOL)fp8;	// IMP=0x30b8acd1
- (void)setDelegate:(id)fp8;	// IMP=0x30b8ac59

@end
