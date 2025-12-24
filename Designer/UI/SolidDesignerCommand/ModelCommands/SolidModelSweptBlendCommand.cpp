#include "SolidModelSweptBlendCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidModelSweptBlendCommand::SolidModelSweptBlendCommand() noexcept
	: AppCommandBase(std::string(Cmd::MODEL_SWEEPBLEND))
{

}

sdr::SolidModelSweptBlendCommand::~SolidModelSweptBlendCommand()
{

}

bool SolidModelSweptBlendCommand::IsSupported() const
{
	return false;
}

bool SolidModelSweptBlendCommand::IsVisible() const
{
	return false;
}

bool SolidModelSweptBlendCommand::IsEnabled() const
{
	return false;
}

std::string SolidModelSweptBlendCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidModelSweptBlendCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}