//��ң�� BY LXH 98-2-1 07:46����

inherit NPC;
string do_something();

void create()
{
        set_name("�Ĺ�",({"du gui","du", "gui" }) );
        set("gender", "����" );
        set("age", 19);
        set("long", "���Ǹ���Ĺ�\n");
        set("combat_exp", 10);
//        set("shen", 50);
        set("mingwang", 1);
        set("str", 11);
        set("con", 11);
        set("int", 11);
        set("attitude", "friendly");
        setup();
//        carry_object(__DIR__"obj/ak47")->wield();
        add_money("coin",500);
}
void do_something()
{
   command(sprintf("bet %d coin", 1+random(5)));
   call_out ("do_something", 60);   
}
void init()
{
   ::init();

   remove_call_out("do_something");
   call_out ("do_something", 1);     

}
