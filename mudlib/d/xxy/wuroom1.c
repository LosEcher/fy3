// Room: /d/xxy/wuroom1.c

inherit ROOM;

void create ()
{
  set ("short", "���ֶ���¥");
  set ("long", @LONG
���ϼ���¥��,�����϶�¥,�����һ���Ե�ʮ�ָ����û�,�Ӻ�������
��������,��԰��ɫ��Ŀ,�ڱ�������ʿ��Ϣ�ĵط�.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wushou.c" : 2,
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"wuroom4",
  "eastdown" : __DIR__"zoulang6",
]));
  set("outdoors", "/d/xxy");

  setup();
}
int valid_leave(object me,string dir)
{
   object ob;
   string str;
       ob=present("pai",me);
        if (dir=="north")
              {
                 if (!ob) return notify_fail("�����˽��������뵽����ô?\n");
                   str=ob->query("name");
                 if (str=="����"||str=="ͭ��")
                        return notify_fail("��ĵȼ�������������¥!\n");
               }
    return ::valid_leave(me,dir);
}
     