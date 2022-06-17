#include <gazebo/gazebo.hh>

namespace gazebo
{
    class WorldPluginMyRobot : public WorldPlugin
    {
        public: WorldPluginMyRobot() : WorldPlugin()
        {
            printf("Welcome to Ajith's world!\n");
            printf("\033[1;34m \342\230\272 Please source /usr/share/gazebo/setup.sh before extending GAZEBO_PLUGIN_PATH if ContainPlugin doesnt load \033[0m\n");
        }

        public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
        {

        }
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}