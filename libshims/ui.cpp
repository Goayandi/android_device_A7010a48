#include <string>

#include <ui/GraphicBuffer.h>
#include <media/stagefright/MediaBuffer.h>
#include <gui/BufferItemConsumer.h>

extern "C" void _ZN7android13GraphicBufferC1EjjijjjP13native_handleb(
        const native_handle_t* handle,
        android::GraphicBuffer::HandleWrapMethod method,
        uint32_t width,
        uint32_t height,
        int format,
        uint32_t layerCount,
        uint64_t usage,
        uint32_t stride);

/*GraphicBuffer::GraphicBuffer(uint32_t inWidth, uint32_t inHeight,
        PixelFormat inFormat, uint32_t inUsage, uint32_t inStride,
        native_handle_t* inHandle, bool keepOwnership) */
extern "C" void _ZN7android13GraphicBufferC1EjjijjP13native_handleb(
        uint32_t inWidth,
        uint32_t inHeight,
        int inFormat,
        uint32_t inUsage,
        uint32_t inStride,
        native_handle_t* inHandle,
        bool keepOwnership)
{
    android::GraphicBuffer::HandleWrapMethod inMethod =
        (keepOwnership ? android::GraphicBuffer::TAKE_HANDLE : android::GraphicBuffer::WRAP_HANDLE);
    _ZN7android13GraphicBufferC1EjjijjjP13native_handleb(inHandle, inMethod, inWidth, inHeight,
        inFormat, static_cast<uint32_t>(1), static_cast<uint64_t>(inUsage), inStride);
}


// GraphicBuffer(uint32_t inWidth, uint32_t inHeight, PixelFormat inFormat,
//               uint32_t inUsage, std::string requestorName = "<Unknown>");
extern "C" void _ZN7android13GraphicBufferC1EjjijNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(
    uint32_t inWidth, uint32_t inHeight, int inFormat, uint32_t inUsage,
    std::string requestorName);

//libcam_utils.so
extern "C" void _ZN7android13GraphicBufferC1Ejjij(
    uint32_t inWidth, uint32_t inHeight, int inFormat, uint32_t inUsage) {
  std::string requestorName = "<Unknown>";
  _ZN7android13GraphicBufferC1EjjijNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(
      inWidth, inHeight, inFormat, inUsage, requestorName);
}

#if defined(__LP64__)
extern "C" void _ZN7android13GraphicBufferC1EPK13native_handleNS0_16HandleWrapMethodEjjijmj(
	void *self, const native_handle_t* handle,
        android::GraphicBuffer::HandleWrapMethod method,
        uint32_t width, uint32_t height, android::PixelFormat format,
        uint32_t layerCount, uint64_t usage, uint32_t stride);

extern "C" void _ZN7android13GraphicBufferC1EP19ANativeWindowBufferb(
	void *self, ANativeWindowBuffer* buffer, bool keepOwnership)
{
    _ZN7android13GraphicBufferC1EPK13native_handleNS0_16HandleWrapMethodEjjijmj(
	self, buffer->handle,
	keepOwnership ? android::GraphicBuffer::TAKE_HANDLE : android::GraphicBuffer::WRAP_HANDLE,
	buffer->width, buffer->height, buffer->format, (uint32_t)buffer->layerCount,
	buffer->usage, buffer->stride);
}
#else
extern "C" void _ZN7android13GraphicBufferC1EPK13native_handleNS0_16HandleWrapMethodEjjijyj(
	void *self, const native_handle_t* handle,
        android::GraphicBuffer::HandleWrapMethod method,
        uint32_t width, uint32_t height, android::PixelFormat format,
        uint32_t layerCount, uint64_t usage, uint32_t stride);

extern "C" void _ZN7android13GraphicBufferC1EP19ANativeWindowBufferb(
	void *self, ANativeWindowBuffer* buffer, bool keepOwnership)
{
    _ZN7android13GraphicBufferC1EPK13native_handleNS0_16HandleWrapMethodEjjijyj(
	self, buffer->handle,
	keepOwnership ? android::GraphicBuffer::TAKE_HANDLE : android::GraphicBuffer::WRAP_HANDLE,
	buffer->width, buffer->height, buffer->format, buffer->layerCount,
	buffer->usage, buffer->stride);
}
#endif

extern "C" void _ZN7android11BufferQueue17createBufferQueueEPNS_2spINS_22IGraphicBufferProducerEEEPNS1_INS_22IGraphicBufferConsumerEEEb(
	void* outProducer, void* outConsumer, bool consumerIsSurfaceFlinger);

extern "C" void _ZN7android11BufferQueue17createBufferQueueEPNS_2spINS_22IGraphicBufferProducerEEEPNS1_INS_22IGraphicBufferConsumerEEERKNS1_INS_19IGraphicBufferAllocEEE(
	void* outProducer, void* outConsumer, void* allocator __unused, bool consumerIsSurfaceFlinger)
{
    _ZN7android11BufferQueue17createBufferQueueEPNS_2spINS_22IGraphicBufferProducerEEEPNS1_INS_22IGraphicBufferConsumerEEEb(
	outProducer, outConsumer, consumerIsSurfaceFlinger);
}

#if defined(__LP64__)
extern "C" void _ZN7android18BufferItemConsumerC1ERKNS_2spINS_22IGraphicBufferConsumerEEEmib(
        const android::sp<android::IGraphicBufferConsumer>& consumer, uint64_t consumerUsage,
        int bufferCount, bool controlledByApp);

/* BufferItemConsumer::BufferItemConsumer(
        const sp<IGraphicBufferConsumer>& consumer, uint32_t consumerUsage,
        int bufferCount, bool controlledByApp) */
extern "C" void _ZN7android18BufferItemConsumerC1ERKNS_2spINS_22IGraphicBufferConsumerEEEjib(
        const android::sp<android::IGraphicBufferConsumer>& consumer, uint32_t consumerUsage,
        int bufferCount, bool controlledByApp)
{
     _ZN7android18BufferItemConsumerC1ERKNS_2spINS_22IGraphicBufferConsumerEEEmib(consumer, (uint64_t)consumerUsage, bufferCount, controlledByApp);
}
#else
extern "C" void _ZN7android18BufferItemConsumerC1ERKNS_2spINS_22IGraphicBufferConsumerEEEyib(
        const android::sp<android::IGraphicBufferConsumer>& consumer, uint64_t consumerUsage,
        int bufferCount, bool controlledByApp);

/* BufferItemConsumer::BufferItemConsumer(
        const sp<IGraphicBufferConsumer>& consumer, uint32_t consumerUsage,
        int bufferCount, bool controlledByApp) */
extern "C" void _ZN7android18BufferItemConsumerC1ERKNS_2spINS_22IGraphicBufferConsumerEEEjib(
        const android::sp<android::IGraphicBufferConsumer>& consumer, uint32_t consumerUsage,
        int bufferCount, bool controlledByApp)
{
     _ZN7android18BufferItemConsumerC1ERKNS_2spINS_22IGraphicBufferConsumerEEEyib(consumer, (uint64_t)consumerUsage, bufferCount, controlledByApp);
}
#endif
