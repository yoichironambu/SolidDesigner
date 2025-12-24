#include "SolidEditRedoCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidEditRedoCommand::SolidEditRedoCommand() noexcept
	: AppCommandBase(std::string(Cmd::EDIT_REDO))
{

}

sdr::SolidEditRedoCommand::~SolidEditRedoCommand()
{

}

bool SolidEditRedoCommand::IsSupported() const
{
	return false;
}

bool SolidEditRedoCommand::IsVisible() const
{
	return false;
}

bool SolidEditRedoCommand::IsEnabled() const
{
	return false;
}

std::string SolidEditRedoCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidEditRedoCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}