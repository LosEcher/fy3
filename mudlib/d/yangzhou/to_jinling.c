// Room: /u/swordman/yangzhou/to_jinling
inherit ROOM;

void create ()
{
  set ("short", "�ٵ�");
  set ("long", @LONG
�������ޱߵĻ�Ұ�أ���������Ӱ��Ҳ���������������ǵ�����һ
�����硣һ������įӿ����ͷ���㲻�ɵļӿ��˲���������ԶԶ��ȥ
��һ���ųǡ������ٵ�һֱͨ���꣬�����Ǹ�С���У�����Ϊ�����
λ�õ����⣬�����Ǳ��ұ���֮�ء��㿴��һ�£��������˻�ͦ�ࡣ
LONG);

  set("light_up", 1);
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"guandao",
  "west" : __DIR__"jiaowai",
]));

  setup();
}
