inherit NPC;

void create()
{
        set_name("С��è", ({ "cat" }));
        set("long","һֻ��С�İ�ɫ��ëС��è�����������۾�������ʮ�ֽ��ᡣ\n");
        set("race", "Ұ��");
        set("age", 2);
        set("int", 30);
        set("kee", 300);
        set("max_kee", 300);
        set("gin", 100);
        set("max_gin", 100);
        set("shen_type", 0);
        set("combat_exp",50000);
        set("attitude", "peaceful");

        set("limbs", ({ "ͷ��", "����", "צ��","β��" }) );
        set("verbs", ({ "bite","hoof" }) );
        set_temp("apply/attack", 50);
        set_temp("apply/armor", 15);
        set_temp("apply/damage", 25);

        setup();
         set("chat_chance",2);
        set("chat_msg", ({
                "С��è������Ŀ��˿��㣬ת��ȥ׷��ոշɹ��ĺ�����\n",
                "С��è��צ��ȥͱ���ϵ�Сʯͷ��\n",
                "С��è���Դ�ſ�ڵ�������ǰ�����ƺ�������ʲô������\n"
        }) );
}

void die()
{
        object ob;
         message_vision(name()+"��ҵؽ������������ڵ��� ... \n",this_object());
/*
        ob = new("/u/yuki/npc/corpse");
        ob->move(environment(this_object()));
*/
//          destruct(this_object());
              ::die();
}
