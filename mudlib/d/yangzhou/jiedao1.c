// Room: /u/swordman/yangzhou/jiedao1
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
        ����������ȫ��ˮ��һ·¥ֱ̨��ɽ��
    �������������������Ƶ�������ɽׯ��ׯ�ڱ�ˮ�̲ݣ�̨ͤˮ鿣�
����¥�ţ��������š����⡰�����ޱߣ������ػ�����  ̨ͤ���ɣ���
����ˮȫ�ա�����ˮ���ҡ��������ڡ����ɵ������Ұ����������顣
LONG);

  set("outdoors", "/u/swordman");
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qigai" : 2,
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"jiedao2",
  "south" : __DIR__"jiedao",
]));
  set("light_up", 1);

  setup();
}
