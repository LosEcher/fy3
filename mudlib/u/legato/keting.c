inherit ROOM;
#include <room.h>

void create()
{
      set("short","����");
      set("long",@LONG
������ɽׯ�нӴ����˵ĵط������ź�ľ��ɵ���������İڷ�������
�м�Ĳ輸�Ϸ����ʹ��Ͳ��,���������Եÿ�����,ǽ�Ϲ��ż���ɽˮ
����ī����,����羲,ʹ�����ڰ���֮��װ���ŵ���,��û��������,����
��ͯվ������æǰæ��

LONG);
                set("objects",([
         "/u/legato/npc/yun chengfeng":1,
       ]));

      set("exits",([ /* sizeof() == 1 */
          "north": __DIR__"bedroom",
          "east"  : __DIR__"shufang",
          "west"  : __DIR__"fanting",
          "south": __DIR__"path1",
]));
    
      setup();


}
int valid_leave(object me, string dir)
{
        mapping myfam;
        myfam = (mapping)me->query("family");

        if ((!myfam || myfam["family_name"] != "�㵴��") && 
                objectp(present("yun chengfeng", environment(me))))
           return notify_fail("�Ƴ˷�ȵ�����ʦ���ң��������ڡ�\n");

        return ::valid_leave(me, dir);
}

