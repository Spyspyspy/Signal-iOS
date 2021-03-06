//
//  Copyright (c) 2018 Open Whisper Systems. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@class OWSSignalServiceProtosContent;
@class OWSSignalServiceProtosDataMessage;
@class SSKProtoEnvelope;

NSString *envelopeAddress(SSKProtoEnvelope *envelope);

@interface OWSMessageHandler : NSObject

- (NSString *)descriptionForEnvelopeType:(SSKProtoEnvelope *)envelope;
- (NSString *)descriptionForEnvelope:(SSKProtoEnvelope *)envelope;
- (NSString *)descriptionForContent:(OWSSignalServiceProtosContent *)content;
- (NSString *)descriptionForDataMessage:(OWSSignalServiceProtosDataMessage *)dataMessage;

@end

NS_ASSUME_NONNULL_END
