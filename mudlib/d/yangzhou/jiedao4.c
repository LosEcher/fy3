// Room: /u/swordman/yangzhou/jiedao4.c

inherit ROOM;

void create ()
{
  set ("short", "��ʮ����");
  set ("long", @LONG
        ����ʮ��������ҹ�����˺δ��̴�����
    ��ʮ����������ҩ�ţ�����������ʮ�������ڴˣ��ʵ�����
��ͷʯ�̡��̻�ҹ�¡�����֪��˭����ʡ�������һ��������Ի��
������԰�����򱱾��Ǵ����£�ԶԶ�Ϳɼ���Ժ���������ˡ�
LONG);

  set("outdoors", "/u/swordman");
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/youke" : 2,
]));
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 3 */
  "southwest" : __DIR__"jiedao3",
  "west" : __DIR__"tingxiao",
  "north" : __DIR__"damingshi",
]));

  setup();
}
