#include "SolidModelVolumeHelicalSweepCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidModelVolumeHelicalSweepCommand::SolidModelVolumeHelicalSweepCommand() noexcept
	: AppCommandBase(std::string(Cmd::MODEL_SWEEP_VOLUMEHELICAL))
{

}

sdr::SolidModelVolumeHelicalSweepCommand::~SolidModelVolumeHelicalSweepCommand()
{

}

bool SolidModelVolumeHelicalSweepCommand::IsSupported() const
{
	return false;
}

bool SolidModelVolumeHelicalSweepCommand::IsVisible() const
{
	return false;
}

bool SolidModelVolumeHelicalSweepCommand::IsEnabled() const
{
	return false;
}

std::string SolidModelVolumeHelicalSweepCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidModelVolumeHelicalSweepCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}