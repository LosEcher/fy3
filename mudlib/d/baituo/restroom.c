//room: /d/btshan/restroom.c
#include <room.h>
#include <ansi.h>;
inherit ROOM;

void create()
{
  set("short","��Ϣ��");
  set("long",
      "�����Ǽ���Ϣ�ң��������Ŵ󴲡�������˯���ǳ������û����\n"
  "���š����������ɵĳ��ȡ�\n"
     );

  set("exits",([
      "south" : __DIR__"changlang",
     ]));

  set("sleep_room", 1);
  set("no_fight",1);
  set("no_steal",1);

 setup();
}
void init()
{       object ob;
        string classname;
        if( interactive( ob = this_player()))
        {
        classname = ob->query("family/family_name");
        if(classname !="����ɽ��") {

        ob->move(__DIR__"changlang");
        message_vision(HIW"һ��ǿ�ҵ�ɷ����$N���˳�ȥ��\n\n"NOR, ob);
                               }
        }
}

