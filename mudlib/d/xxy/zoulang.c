// Room: /d/xxy/zoulang 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "����");
  set ("long", @LONG
һ������ǽ�Ļ���,��һ�߾��ǻ�԰,�Ӵ˿�ȥ,��԰��һ����¥ʮ������.
����'��'��������ס�����¥.�����µ������ڷ��е�������.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"zoulang1",
  "south" : __DIR__"datang",
]));
  set("outdoors", "/d/xxy");
  setup();
}
int valid_leave(object me,string dir)
{      
         if(!userp(me)&&me->query("home")==1&&dir=="south")
          return notify_fail("");
        return ::valid_leave(me,dir);
}
