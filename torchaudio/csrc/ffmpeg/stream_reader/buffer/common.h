#pragma once
#include <torch/torch.h>
#include <torchaudio/csrc/ffmpeg/ffmpeg.h>

namespace torchaudio {
namespace ffmpeg {
namespace detail {

//////////////////////////////////////////////////////////////////////////////
// Helper functions
//////////////////////////////////////////////////////////////////////////////
torch::Tensor convert_audio(AVFrame* frame);

torch::Tensor get_image_buffer(AVFrame* pFrame, const torch::Device& device);
torch::Tensor convert_image(AVFrame* frame, const torch::Device& device);

} // namespace detail
} // namespace ffmpeg
} // namespace torchaudio
