#include "SolidModelHoleCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidModelHoleCommand::SolidModelHoleCommand() noexcept
	: AppCommandBase(std::string(Cmd::MODEL_HOLE))
{

}

sdr::SolidModelHoleCommand::~SolidModelHoleCommand()
{

}

bool SolidModelHoleCommand::IsSupported() const
{
	return false;
}

bool SolidModelHoleCommand::IsVisible() const
{
	return false;
}

bool SolidModelHoleCommand::IsEnabled() const
{
	return false;
}

std::string SolidModelHoleCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidModelHoleCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}